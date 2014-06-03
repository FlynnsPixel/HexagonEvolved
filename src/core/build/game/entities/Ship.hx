package core.build.game.entities;

import core.build.game.managers.ToolManager;
import core.build.game.managers.Universe;
import core.build.game.stage.StageManager;
import flash.display.Bitmap;
import flash.display.Shape;
import flash.display.Sprite;
import flash.filters.DropShadowFilter;

/**
 * ...
 * @author Richman Stewart
 */

class Ship extends Sprite {
	
	//player variables
	public var container:Sprite;
	public var base:Shape;
	public var dest:Float = 0;
	public var moving:Bool = false;
	private var movedelaytimer:Int = 0;
	public var angle:Float = 0;
	public var closestrotationoffset:Float = 0;
	public var adjusting:Bool = true;
	public var rotationindex:Int = 0;
	public var destoffset:Float = 0;
	
	public function new():Void {
		super();
	}
	
	public function create():Void {
		base = new Shape();
		base.graphics.lineStyle(1, 0x000000);
		base.graphics.beginFill(0x656565);
		base.graphics.lineTo(15, 0);
		base.graphics.lineTo(7.5, 15);
		base.graphics.lineTo(0, 0);
		base.x = -(base.width / 2);
		base.y = Universe.stagemanager.hexagon.height;
		base.filters = [new DropShadowFilter(2, 90, 0x000000, 1, 2, 2, 1)];
		container = new Sprite();
		container.addChild(base);
		addChild(container);
		Universe.stagemanager.container.addChild(this);
	}
	
	public function update():Void {
		var stagemanager:StageManager = Universe.stagemanager;
		if (stagemanager.pause && adjusting) {
			stagemanager.container.rotation -= (stagemanager.container.rotation - closestrotationoffset) / 10;
			if (stagemanager.container.rotation >= closestrotationoffset - .1 && stagemanager.container.rotation <= closestrotationoffset + .1) {
				stagemanager.container.rotation = closestrotationoffset;
				visible = false;
				adjusting = false;
				Universe.uimanager.createmenu();
			}else {
				return;
			}
		}
		
		if (stagemanager.pause) { transform.colorTransform = Universe.stagemanager.colourchanger.transform; }
		
		if (!stagemanager.hit) {
			if (moving) {
				if (stagemanager.pause) {
					stagemanager.container.rotation -= (stagemanager.container.rotation + (dest - closestrotationoffset)) / 2.5;
				}else {
					rotation -= (rotation - (dest + destoffset)) / 1.5;
				}
				
				++movedelaytimer;
				if (!stagemanager.pause && movedelaytimer >= 6 ||
					stagemanager.pause && movedelaytimer >= 15 && !Universe.keyboard.rightkeydown && !Universe.keyboard.leftkeydown) {
					movedelaytimer = 0; moving = false;
				}
			}else {
				var lastdest:Float = 0;
				if (Universe.keyboard.rightkeydown) { lastdest = dest; dest += stagemanager.incrementangle; moving = true;
				calculateangle(lastdest); lastdest = dest; if (obstaclecollision()) { dest -= stagemanager.incrementangle; calculateangle(lastdest);
				}else if (stagemanager.pause) { ++rotationindex; Universe.uimanager.turn(); }
				}else if (Universe.keyboard.leftkeydown) { lastdest = dest; dest -= stagemanager.incrementangle; moving = true;
				calculateangle(lastdest); lastdest = dest; if (obstaclecollision()) { dest += stagemanager.incrementangle; calculateangle(lastdest);
				}else if (stagemanager.pause) { --rotationindex; Universe.uimanager.turn(); } }
			}
		}
		
		base.y = ((stagemanager.hexagon.height) / 1.8) + 5;
	}
	
	private function obstaclecollision():Bool {
		for (i in 0...Universe.obstaclemanager.obstacles.length) {
			if (Universe.obstaclemanager.obstacles[i].calculatecollision()) { return true; }
		}
		return false;
	}
	
	public function endmovement():Void {
		if (!Universe.stagemanager.pause) {
			moving = false;
			movedelaytimer = 0;
			rotation = dest + destoffset;
		}
	}
	
	public function calculateangle(lastdest:Float) {
		angle += (dest - lastdest);
		if (Math.round(angle) > 180) { angle = -angle + (dest - lastdest) * 2; }else if (Math.round(angle) <= -180) { angle = -angle; }
	}
}
