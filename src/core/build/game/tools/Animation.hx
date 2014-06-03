package core.build.game.tools;

import flash.display.Bitmap;
import flash.display.DisplayObjectContainer;
import flash.display.Shape;
import flash.display.Sprite;
import flash.filters.BlurFilter;
import flash.Vector.Vector;
import flash.display.BitmapData;

/**
 * ...
 * @author Richman Stewart
 */
class Animation {
	
	//animation variables
	public var frames:Vector<BitmapData>;
	public var index:Int = 0;
	public var timer:Int = 0;
	public var rate:Int = 0;
	public var target:Bitmap;
	public var pause:Bool = false;
	public var loop:Bool = true;
	
	public function new(animationframes:Vector<BitmapData>, animationrate:Int, applytobase:Bitmap) {
		frames = animationframes;
		rate = animationrate;
		target = applytobase;
		index = Std.int(Math.random() * (frames.length - 1));
		updateframe();
	}
	
	public function update():Void {
		if (!pause) {
			++timer;
			if (timer >= rate) {
				updateframe();
				timer = 0;
			}
		}
	}
	
	public function updateframe():Void {
		if (index >= frames.length && loop) { index = 0; }
		if (index >= 0 && index <= frames.length - 1) { target.bitmapData = frames[index]; }
		if (loop) { ++index; }
	}
}
