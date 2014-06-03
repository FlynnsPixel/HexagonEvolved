package core.build.game.managers;

import flash.display.Sprite;
import flash.events.MouseEvent;
import flash.geom.Point;
import flash.events.TouchEvent;

/**
 * ...
 * @author Richman Stewart
 */
class MouseManager {
	
	//mousemanager variables
	private var mouseisdown:Bool = false;
	
	public function new() {
		
	}
	
	public function initiate():Void {
		#if android
		Universe.stage.addEventListener(TouchEvent.TOUCH_BEGIN, touchdown);
		Universe.stage.addEventListener(TouchEvent.TOUCH_END, touchup);
		#else
		Universe.stage.addEventListener(MouseEvent.MOUSE_DOWN, mousedown);
		Universe.stage.addEventListener(MouseEvent.MOUSE_UP, mouseup);
		#end
	}
	
	private function touchdown(event:TouchEvent):Void {
		mouseisdown = true;
		if (Universe.stage.mouseX >= Universe.stage.stageWidth / 2) {
			Universe.keyboard.rightkeydown = true;
		}else {
			Universe.keyboard.leftkeydown = true;
		}
	}
	
	private function touchup(event:TouchEvent):Void {
		mouseisdown = false;
		Universe.keyboard.rightkeydown = false;
		Universe.keyboard.leftkeydown = false;
	}
	
	private function mousedown(event:MouseEvent):Void {
		mouseisdown = true;
	}
	
	private function mouseup(event:MouseEvent):Void {
		mouseisdown = false;
	}
}
