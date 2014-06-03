package core.build.game.stage;

import core.build.game.managers.Universe;
import flash.Vector.Vector;

/**
 * ...
 * @author Richman Stewart
 */

class ObstacleManager {
	
	//obstacle variables
	public var obstacles:Vector<Obstacle>;
	public var obstacletimer:Int = 0;
	public var obstaclerate:Int = 0;
	public var obstaclespeed:Float = 0;
	public var pausespawning:Bool = false;
	
	public function new():Void {
		obstacles = new Vector<Obstacle>();
	}
	
	public function update():Void {
		if (!Universe.stagemanager.hit && !Universe.stagemanager.pause && !pausespawning) {
			++obstacletimer;
			if (obstacletimer >= obstaclerate) {
				obstacletimer = 0;
				var obstaclerotation:Int = Std.int(Math.random() * Universe.stagemanager.sectors);
				var spawn:Int = Std.int(Math.random() * (Universe.stagemanager.sectors - 1)) + 1;
				if (Universe.stagemanager.mode == 3) { --spawn; }
				for (i in 0...spawn) {
					createobstacle(obstaclerotation);
					++obstaclerotation;
				}
			}
		}
		var index:Int = 0;
		for (i in 0...obstacles.length) {
			obstacles[index].update();
			if (obstacles[index].removed) {
				Universe.stagemanager.container.removeChild(obstacles[index]);
				obstacles[index].graphics.clear();
				obstacles.splice(index, 1);
				--index;
			}
			++index;
		}
	}
	
	public function reverseobstacles(reverseonly:Bool = false):Void {
		if (!reverseonly && Universe.assets.soundchannel != null) {
			Universe.assets.soundtransform.volume = .5;
			Universe.assets.soundchannel.soundTransform = Universe.assets.soundtransform;
		}
		for (i in 0...obstacles.length) {
			obstacles[i].reverse = true; obstacles[i].speed = -obstacles[i].speed * 6;
		}
	}
	
	public function removeobstacles():Void {
		for (i in 0...obstacles.length) {
			obstacles[i].removed = true;
		}
	}
	
	public function createobstacle(obstaclerotation:Int):Void {
		var stagemanager:StageManager = Universe.stagemanager;
		var obstacle:Obstacle = new Obstacle();
		obstacle.midx = stagemanager.midx;
		obstacle.midy = stagemanager.midy;
		obstacles.push(obstacle);
		stagemanager.container.addChild(obstacle);
		stagemanager.container.setChildIndex(obstacle, 1);
		obstacle.x = -(stagemanager.rect.width / 2);
		obstacle.y = -(stagemanager.rect.height / 2);
		obstacle.distancex = stagemanager.midx * 1.5;
		obstacle.distancey = stagemanager.midy * 1.5;
		obstacle.offsetrotation += (stagemanager.increment * obstaclerotation);
		var colour:Int = 0x959595;
		obstacle.colour = colour;
		obstacle.speed = obstaclespeed;
		if (stagemanager.gamemode == 1) { obstacle.speed = 15; }
	}
}
