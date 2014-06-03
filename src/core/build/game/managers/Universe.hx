package core.build.game.managers;

import core.build.game.entities.Ship;
import core.build.game.stage.ObstacleManager;
import core.build.game.stage.StageManager;
import core.build.game.ui.UIManager;
import flash.display.Sprite;
import flash.display.Stage;
import flash.events.Event;
import flash.Lib;

/**
 * ...
 * @author Richman Stewart
 */

class Universe {
	
	//global variables
	public static var stage:Stage;
	
	//manager variables
	public static var assets:AssetManager;
	public static var keyboard:KeyboardManager;
	public static var mouse:MouseManager;
	public static var tools:ToolManager;
	
	//entity variables
	public static var player:Ship;
	
	//stage variables
	public static var stagemanager:StageManager;
	public static var obstaclemanager:ObstacleManager;
	
	//ui variables
	public static var uimanager:UIManager;
	
	public static function initiate():Void {
		stage = Lib.current.stage;
		
		stage.addEventListener(Event.ENTER_FRAME, update);
		
		keyboard = new KeyboardManager();
		keyboard.initiate();
		mouse = new MouseManager();
		mouse.initiate();
		
		tools = new ToolManager();
		assets = new AssetManager();
		player = new Ship();
		stagemanager = new StageManager();
		obstaclemanager = new ObstacleManager();
		uimanager = new UIManager();
		
		stagemanager.create();
		player.create();
	}
	
	public static function update(event:Event):Void {
		player.update();
		stagemanager.update();
		obstaclemanager.update();
		uimanager.update();
	}
}
