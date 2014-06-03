package core.build.game.stage;

import core.build.game.managers.Universe;
import core.build.game.tools.ColourChanger;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Shape;
import flash.display.Sprite;
import flash.filters.DropShadowFilter;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.utils.ByteArray;
import flash.Vector.Vector;
import flash.media.SoundMixer;

/**
 * ...
 * @author Richman Stewart
 */

class StageManager {
	
	//stagemanager variables
	public var container:Sprite;
	public var canvas:Bitmap;
	public var canvasdata:BitmapData;
	public var hexagon:Shape;
	public var colourchanger:ColourChanger;
	public var hit:Bool = false;
	public var hittimer:Int = 0;
	public var pause:Bool = true;
	
	//game variables
	public var sectors:Int = 6;
	public var rect:Rectangle;
	private var point:Point;
	public var increment:Float = 0;
	public var incrementangle:Int = 0;
	public var midx:Int = 0;
	public var midy:Int = 0;
	public var mode:Int = 0;
	public var gamemode:Int = 0;
	public var ingame:Bool = false;
	
	//rotation variables
	public var rotationdirection:Float = 0;
	private var rotatedirtimer:Int = 0;
	private var rotatedirdest:Int = 500;
	private var hexagontimer:Float = 1;
	private var hexagondir:Int = 0;
	
	public function new():Void {
		container = new Sprite();
		var size:Int = Std.int(Universe.stage.stageWidth * 1.25);
		if (Universe.stage.stageHeight >= size) { size = Std.int(Universe.stage.stageHeight * 1.25); }
		rect = new Rectangle(0, 0, size, size);
		point = new Point(0, 0);
	}
	
	public function create():Void {
		canvasdata = new BitmapData(Std.int(rect.width), Std.int(rect.height), true, 0);
		canvas = new Bitmap(canvasdata);
		Universe.stage.addChild(container);
		container.addChild(canvas);
		increment = ((360 / sectors) / 2) / (180 / Math.PI) * 2;
		incrementangle = Math.round(increment * (180 / Math.PI));
		Universe.player.angle = incrementangle;
		colourchanger = new ColourChanger(container, .01, 2.5);
		
		hexagon = new Shape();
		Universe.stage.addChild(hexagon);
		container.addChild(hexagon);
		draw();
		hit = true;
		hittimer = 0;
		hexagontimer = 1;
		hexagondir = 0;
		if (gamemode == 1) { Universe.obstaclemanager.obstaclerate = 20; }else { Universe.obstaclemanager.obstaclerate = 40; }
	}
	
	public function draw(playsound:Bool = true):Void {
		if (mode == 4 || mode == 5) { sectors = 4; }else { sectors = 6; }
		colourchanger.rgbspeed = .01;
		colourchanger.maxrgb = 2.5;
		if (mode >= 4) { colourchanger.rgbspeed = .05; }else if (mode == 0) { colourchanger.maxrgb = 2.8; colourchanger.rgbspeed = .025; }
		var tempincrement:Float = ((360 / sectors) / 2) / (180 / Math.PI) * 2;
		
		midx = Std.int(rect.width / 2);
		midy = Std.int(rect.height / 2);
		var angle:Float = tempincrement;
		
		if (playsound) {
			Universe.assets.playsound(Universe.player.rotationindex);
			Universe.assets.soundtransform.volume = .5;
			Universe.assets.soundchannel.soundTransform = Universe.assets.soundtransform;
		}
		
		var graphics:Shape = new Shape();
		hexagon.graphics.clear();
		hexagon.graphics.lineStyle(1, 0x2E2E2E);
		hexagon.graphics.beginFill(0x656565);
		for (i in 0...sectors) {
			var colour:Int = 0;
			if (mode == 0) { colour = 0x6E6E6E; if (i % 2 == 0) { colour = 0x2E2E2E; }
			}else if (mode == 1 || mode == 4) { colour = 0xDEDEDE; if (i % 2 == 0) { colour = 0xB5B5B5; }
			}else if (mode == 2) { colour = 0xae1414; if (i % 2 == 0) { colour = 0x5b0808; }
			}else if (mode == 3) { colour = 0x4a1e9b; if (i % 2 == 0) { colour = 0x240858; }
			}else if (mode == 5) { colour = 0x000000; if (i % 2 == 0) { colour = 0x000000; } }
			graphics.graphics.lineStyle(1, colour);
			graphics.graphics.beginFill(colour);
			graphics.graphics.moveTo(midx, midy);
			graphics.graphics.lineTo(midx + (Math.cos(angle) * (midx * 2.8)), midy + (Math.sin(angle) * (midy * 2.8)));
			angle += tempincrement;
			graphics.graphics.lineStyle(1, colour);
			graphics.graphics.lineTo(midx + (Math.cos(angle) * (midx * 2.8)), midy + (Math.sin(angle) * (midy * 2.8)));
			graphics.graphics.lineTo(midx, midy);
			graphics.graphics.endFill();
			
			if (i == 0) {
				angle -= tempincrement;
				hexagon.graphics.moveTo((Math.cos(angle) * 25), (Math.sin(angle) * 25));
				angle += tempincrement;
			}
			hexagon.graphics.lineTo((Math.cos(angle) * 25), (Math.sin(angle) * 25));
		}
		hexagon.graphics.endFill();
		hexagon.scaleX = 5;
		hexagon.scaleY = 5;
		canvasdata.fillRect(rect, 0x000000);
		canvasdata.draw(graphics);
		
		graphics.graphics.clear();
		canvas.x = -Std.int(rect.width / 2);
		canvas.y = -Std.int(rect.height / 2);
		container.x = Universe.stage.stageWidth / 2;
		container.y = Universe.stage.stageHeight / 2;
	}
	
	public function update():Void {
		colourchanger.update();
		
		if (!pause && !hit) {
			var speed:Float = rotationdirection;
			if (!hit && !pause) { ++rotatedirtimer;
			if (rotatedirtimer >= rotatedirdest) { rotatedirtimer = 0; rotatedirdest = 200 + Std.int(Math.random() * 500); rotationdirection = -rotationdirection; }
			}else { rotationdirection = 1.75; }
			
			container.rotation += speed;
		}else if (ingame && hit) {
			rotationdirection = rotationdirection * .99;
			container.rotation += rotationdirection;
		}
		
		if (!hit && !pause) {
			if (hexagon.scaleX > 2) {
				hexagon.scaleX -= .25;
				hexagon.scaleY -= .25;
				return;
			}else if (hexagontimer <= 15) {
				hexagon.scaleX = 1;
				hexagon.scaleY = 1;
				++hexagontimer;
			}
			
			if (hexagontimer >= 15) {
				if (hexagondir == 0) {
					if (hexagon.scaleX < 1.25) { hexagon.scaleX += .1; hexagon.scaleY += .1; }else { hexagondir = 1; }
				}else {
					if (hexagon.scaleX > 1) { hexagon.scaleX -= .1; hexagon.scaleY -= .1; }else { hexagondir = 0; hexagon.scaleX = 1; hexagon.scaleY = 1; hexagontimer = 0; }
				}
			}
		}else if (hit) {
			++hittimer;
			Universe.uimanager.pausetimer = true;
			if (hittimer >= 100) {
				Universe.player.visible = false;
				if (hexagon.scaleX <= 5) {
					hexagon.scaleX += .25;
					hexagon.scaleY += .25;
				}else {
					hittimer = 0;
					pause = true;
					hit = false;
					ingame = false;
					if (rotationdirection <= 0) {
						Universe.player.closestrotationoffset = container.rotation - (container.rotation % incrementangle);
					}else {
						Universe.player.closestrotationoffset = container.rotation + (incrementangle - (container.rotation % incrementangle));
					}
					Universe.player.adjusting = true;
					Universe.obstaclemanager.removeobstacles();
				}
			}
		}
	}
	
	public function reset():Void {
		hit = false;
		pause = false;
		ingame = true;
		hexagon.scaleX = 5;
		hexagon.scaleY = 5;
		Universe.obstaclemanager.obstacletimer = 0;
		rotatedirtimer = 0;
		hittimer = 0;
		rotationdirection = 2;
		Universe.uimanager.removemenu();
		Universe.player.visible = true;
		container.rotation = 0;
		Universe.assets.playsfx(1);
		updatelevelvalues();
	}
	
	private function updatelevelvalues():Void {
		Universe.assets.playsound(Universe.player.rotationindex, true);
		increment = ((360 / sectors) / 2) / (180 / Math.PI) * 2;
		incrementangle = Math.round(increment * (180 / Math.PI));
		
		Universe.player.dest = 0;
		Universe.player.angle = incrementangle;
		Universe.player.rotation = incrementangle;
		Universe.player.destoffset = 0;
		if (sectors == 4) { Universe.player.rotation = incrementangle / 2; Universe.player.dest = Universe.player.rotation; }
		
		switch (mode) {
			case 0:
				rotationdirection = 2;
				Universe.obstaclemanager.obstaclerate = 65;
				Universe.obstaclemanager.obstaclespeed = 5;
			case 1:
				rotationdirection = 2.8;
				Universe.obstaclemanager.obstaclerate = 35;
				Universe.obstaclemanager.obstaclespeed = 8;
			case 2:
				rotationdirection = 3.2;
				Universe.obstaclemanager.obstaclerate = 50;
				Universe.obstaclemanager.obstaclespeed = 15;
			case 3:
				rotationdirection = 4;
				Universe.obstaclemanager.obstaclerate = 15;
				Universe.obstaclemanager.obstaclespeed = 6;
			case 4:
				rotationdirection = 5;
				Universe.obstaclemanager.obstaclerate = 20;
				Universe.obstaclemanager.obstaclespeed = 10;
			case 5:
				rotationdirection = 5;
				Universe.obstaclemanager.obstaclerate = 25;
				Universe.obstaclemanager.obstaclespeed = 15;
		}
	}
	
	public function secondschanged():Void {
		if (Universe.uimanager.seconds % 10 == 0) {
			if (rotationdirection >= 0) { rotationdirection += ((Math.random() * 1) - (Math.random() * 1)) / 5;
			}else { rotationdirection -= ((Math.random() * 1) - (Math.random() * 1)) / 5; }
			Universe.obstaclemanager.obstaclerate -= (1 + Math.round(Math.random() * 5));
			if (Universe.obstaclemanager.obstaclerate <= 10) { Universe.obstaclemanager.obstaclerate = 10; }
			Universe.obstaclemanager.obstaclespeed += .5 + (Math.random() * 1);
			if (Universe.obstaclemanager.obstaclespeed >= 20) { Universe.obstaclemanager.obstaclespeed = 20; }
		}
		if (Universe.uimanager.seconds % 60 == 0) {
			++mode;
			if (mode >= 5) { mode = 5; }
			draw(true);
			updatelevelvalues();
			Universe.obstaclemanager.pausespawning = false;
			hittimer = 0;
		}else if (Universe.uimanager.seconds % 60 == 59) {
			Universe.obstaclemanager.reverseobstacles(true);
			Universe.obstaclemanager.pausespawning = true;
			hittimer = 999;
		}
	}
}
