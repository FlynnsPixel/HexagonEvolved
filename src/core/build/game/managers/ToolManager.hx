package core.build.game.managers;

import core.build.game.tools.Animation;
import core.build.game.tools.Trail;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.DisplayObjectContainer;
import flash.display.Sprite;
import flash.geom.Matrix;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.Vector.Vector;

/**
 * ...
 * @author Richman Stewart
 */

class ToolManager {
	
	//toolmanager variables
	public var animations:Vector<Animation>;
	public var trails:Vector<Trail>;
	
	public function new() {
		animations = new Vector<Animation>();
		trails = new Vector<Trail>();
	}
	
	public function update():Void {
		for (i in 0...animations.length) {
			if (i <= animations.length - 1) { animations[i].update(); }
		}
		for (i in 0...trails.length) {
			if (i <= trails.length - 1) { trails[i].update(); }
		}
	}
	
	public function createanimation(frames:Vector<BitmapData>, rate:Int, applyto:Bitmap = null, autoupdate:Bool = true):Animation {
		var animation:Animation = new Animation(frames, rate, applyto);
		if (autoupdate) { animations.push(animation); }
		return animation;
	}
	
	public function cutspritesheet(sheet:BitmapData, width:Float, height:Float):Vector<BitmapData> {
		var frames:Vector<BitmapData> = new Vector<BitmapData>();
		var rowx:Float = sheet.width / width;
		var rowy:Float = sheet.height / height;
		var rect:Rectangle = new Rectangle();
		var point:Point = new Point();
		rect.width = width; rect.height = height;
		
		for (y in 0...Std.int(rowy)) {
			for (x in 0...Std.int(rowx)) {
				var data:BitmapData = new BitmapData(Std.int(width), Std.int(height), true, 0);
				rect.x = Math.round(x * width); rect.y = Math.round(y * height);
				data.copyPixels(sheet, rect, point);
				frames.push(data);
			}
		}
		return frames;
	}
	
	public function createtrail(image:BitmapData, x:Float, y:Float, fadespeed:Float = .1, autoupdate:Bool = true):Trail {
		var trail:Trail = new Trail(image, x, y, fadespeed);
		if (autoupdate) { trails.push(trail); }
		return trail;
	}
	
	public function remove(object:Dynamic, from:Dynamic):Void {
		for (i in 0...from.length) {
			if (from[i] == object) {
				from.splice(i, 1);
				break;
			}
		}
	}
	
	public function flip(data:BitmapData):BitmapData {
		var flippedata:BitmapData = new BitmapData(data.width, data.height, true, 0);
		var matrix:Matrix = new Matrix( -1, 0, 0, 1, data.width, 0);
		flippedata.draw(data, matrix);
		data.dispose(); data = null;
		return flippedata;
	}
}
