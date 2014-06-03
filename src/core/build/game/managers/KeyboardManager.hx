package core.build.game.managers;

import flash.display.Sprite;
import flash.events.KeyboardEvent;

/**
 * ...
 * @author Richman Stewart
 */
class KeyboardManager {
	
	//keyboardmanager variables
	public var upkeydown:Bool = false;
	public var downkeydown:Bool = false;
	public var leftkeydown:Bool = false;
	public var rightkeydown:Bool = false;
	
	public function new() {
		
	}
	
	public function initiate():Void {
		Universe.stage.addEventListener(KeyboardEvent.KEY_DOWN, keydown);
		Universe.stage.addEventListener(KeyboardEvent.KEY_UP, keyup);
	}
	
	private function keydown(event:KeyboardEvent):Void {
		var key:Int = event.keyCode;
		
		if (key == 65 || key == 37) { leftkeydown = true; }
		if (key == 68 || key == 39) { rightkeydown = true; }
		if (key == 87 || key == 38) { upkeydown = true; }
		if (key == 83 || key == 40) { downkeydown = true; }
	}
	
	private function keyup(event:KeyboardEvent):Void {
		var key:Int = event.keyCode;
		
		if (key == 65 || key == 37) { Universe.player.endmovement(); leftkeydown = false; }
		if (key == 68 || key == 39) { Universe.player.endmovement(); rightkeydown = false; }
		if (key == 87 || key == 38) { upkeydown = false; }
		if (key == 83 || key == 40) { downkeydown = false; }
	}
}
