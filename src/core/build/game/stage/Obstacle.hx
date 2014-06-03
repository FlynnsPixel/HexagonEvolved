package core.build.game.stage;

import core.build.game.managers.Universe;
import core.build.game.tools.Point2D;
import flash.display.Shape;
import flash.display.Sprite;
import flash.geom.Point;

/**
 * ...
 * @author Richman Stewart
 */

class Obstacle extends Shape {
	
	//obstacle variables
	public var midx:Int = 0;
	public var midy:Int = 0;
	public var distancex:Float = 0;
	public var distancey:Float = 0;
	public var length:Int = 25;
	public var offsetrotation:Float = 0;
	public var removed:Bool = false;
	public var speed:Float = 10;
	public var colour:Int;
	public var reverse:Bool = false;
	
	public function new() {
		super();
	}
	
	public function update():Void {
		var stagemanager:StageManager = Universe.stagemanager;
		if (reverse && stagemanager.hittimer <= 100) { return; }
		
		distancex -= speed; distancey -= speed;
		if (!reverse && distancex <= -speed - 10 || !reverse && distancey <= -speed - 10 || reverse && distancex >= midx || reverse && distancey >= midy) {
			distancex = 0; distancey = 0;
			removed = true;
		}
		
		var angle:Float = stagemanager.increment + offsetrotation;
		graphics.clear();
		
		graphics.lineStyle(1, colour);
		graphics.beginFill(colour);
		graphics.moveTo(midx + Math.cos(angle) * distancex, midy + Math.sin(angle) * distancey);
		angle += stagemanager.increment;
		graphics.lineTo(midx + Math.cos(angle) * distancex, midy + Math.sin(angle) * distancey);
		graphics.lineTo(midx + Math.cos(angle) * (distancex + length), midy + Math.sin(angle) * (distancey + length));
		angle -= stagemanager.increment;
		graphics.lineTo(midx + Math.cos(angle) * (distancex + length), midy + Math.sin(angle) * (distancey + length));
		graphics.endFill();
		
		if (calculatecollision()) {
			Universe.obstaclemanager.reverseobstacles(); stagemanager.hit = true;
			Universe.assets.playsfx(0);
			reverse = true;
			alpha = .5;
		}
	}
	
	public function calculatecollision():Bool {
		var angle:Float = Universe.stagemanager.increment + offsetrotation;
		if (!reverse && distancex <= length + 30 && distancey <= length + 30 && 
		distancex >= 25 && distancey >= 25) {
			if (Math.round(Math.atan2(Math.sin(angle) * distancey, Math.cos(angle) * distancex) * (180 / Math.PI)) == Math.round(Universe.player.angle)) {
				return true;
			}
		}
		return false;
	}
}
