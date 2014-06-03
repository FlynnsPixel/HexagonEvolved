package core.build.game;

import core.build.game.managers.Universe;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;

/**
 * ...
 * @author Richman Stewart
 */

class Main extends Sprite {
	
	public static function main():Void {
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
		
		Universe.initiate();
	}
}
