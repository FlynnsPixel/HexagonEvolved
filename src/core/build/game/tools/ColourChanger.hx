package core.build.game.tools;

import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.DisplayObject;
import flash.geom.ColorTransform;

/**
 * ...
 * @author Richman Stewart
 */
class ColourChanger {
	
	//colour transform variables
	public var transform:ColorTransform;
	private var redAdd:Float = 0;
	private var greenAdd:Float = 0;
	private var blueAdd:Float = 0;
	public var rgbspeed:Float = 0;
	public var maxrgb:Float = 0;
	public var container:DisplayObject;
	private var reversed:Bool = false;
	
	public function new(applyTo:DisplayObject = null, colourSpeed:Float = .002, maxItensity:Float = 1.4):Void {
		rgbspeed = colourSpeed;
		maxrgb = maxItensity;
		container = applyTo;
		
		transform = new ColorTransform(maxrgb, 1, 1);
		redAdd = rgbspeed;
	}
	
	public function reset():Void {
		container.transform.colorTransform = transform;
	}
	
	public function update():Void {
		//transform colours of mapdata
		transform.redMultiplier += redAdd;
		transform.greenMultiplier += greenAdd;
		transform.blueMultiplier += blueAdd;
		
		if (transform.redMultiplier >= maxrgb) {
			transform.redMultiplier = maxrgb;
			transform.greenMultiplier = 1;
			if (reversed) {
				reverse();
			}else {
				revert();
			}
		}else if (transform.blueMultiplier >= maxrgb) {
			transform.redMultiplier = 1;
			transform.blueMultiplier = maxrgb;
			if (reversed) {
				reverse();
			}else {
				revert();
			}
		}else if (transform.greenMultiplier >= maxrgb) {
			transform.greenMultiplier = maxrgb;
			transform.blueMultiplier = 1;
			if (reversed) {
				reverse();
			}else {
				revert();
			}
		}
		if (container != null) { container.transform.colorTransform = transform; }
	}
	
	public function reverse():Void {
		if (redAdd > 0) {
			greenAdd = rgbspeed;
			redAdd = -rgbspeed;
			blueAdd = 0;
		}else if (blueAdd > 0) {
			redAdd = rgbspeed;
			blueAdd = -rgbspeed;
			greenAdd = 0;
		}else if (greenAdd > 0) {
			redAdd = 0;
			blueAdd = rgbspeed;
			greenAdd = -rgbspeed;
		}
		reversed = true;
	}
	
	public function revert():Void {
		if (redAdd > 0) {
			greenAdd = 0;
			redAdd = -rgbspeed;
			blueAdd = rgbspeed;
		}else if (blueAdd > 0) {
			redAdd = 0;
			blueAdd = -rgbspeed;
			greenAdd = rgbspeed;
		}else if (greenAdd > 0) {
			redAdd = rgbspeed;
			blueAdd = 0;
			greenAdd = -rgbspeed;
		}
		reversed = false;
	}
}
