package core.build.game.tools;

import core.build.game.managers.Universe;
import flash.display.BitmapData;
import flash.display.DisplayObjectContainer;
import flash.display.Sprite;
import flash.display.Bitmap;
import flash.Vector.Vector;

/**
 * ...
 * @author Richman Stewart
 */
class Trail {
	
	//trail variables
	public var x:Float;
	public var y:Float;
	public var trails:Vector<Sprite>;
	public var pause:Bool = false;
	public var fadespeed:Float;
	public var trailimage:BitmapData;
	public var parent:Dynamic;
	public var movemap:Bool = false;
	public var beginalpha:Float = 1;
	public var rotation:Float = 0;
	
	public function new(image:BitmapData, posx:Float, posy:Float, speed:Float) {
		fadespeed = speed;
		trailimage = image;
		x = posx;
		y = posy;
		trails = new Vector<Sprite>();
	}
	
	public function update():Void {
		if (!pause) {
			var trail:Sprite = new Sprite();
			var base:Bitmap = new Bitmap(trailimage);
			trail.addChild(base);
			trail.x = x + (base.width / 2);
			trail.y = y + (base.height / 2);
			base.x = -(base.width / 2);
			base.y = -(base.height / 2);
			trail.alpha = beginalpha;
			Universe.stage.addChild(trail);
			trails.push(trail);
			
			for (i in 0...trails.length) {
				if (i <= trails.length - 1) {
					trails[i].alpha -= fadespeed;
					trails[i].rotation += trails[i].rotation - rotation;
					if (trails[i].alpha <= 0) {
						trails[i].parent.removeChild(trails[i]);
						trails.splice(i, 1);
					}
				}
			}
		}
	}
	
	public function removeall():Void {
		for (i in 0...trails.length) {
			trails[i].parent.removeChild(trails[i]);
		}
		#if flash
		trails.length = 0;
		#else
		trails = [];
		#end
	}
}
