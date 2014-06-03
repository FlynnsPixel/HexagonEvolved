package core.build.game.ui;

import core.build.game.managers.Universe;
import core.build.game.tools.ColourChanger;
import flash.display.Bitmap;
import flash.display.Shape;
import flash.display.Sprite;
import flash.text.TextField;
import flash.text.TextFormat;
import flash.text.TextFormatAlign;
import flash.Vector.Vector;

/**
 * ...
 * @author Richman Stewart
 */

class UIManager {
	
	//uimanager variables
	public var startbutton:EventButton;
	public var colourchanger:ColourChanger;
	private var blackblock:Shape;
	private var blocktext:TextField;
	private var index:Int = 0;
	private var difficultymodes:Vector<String>;
	public var highscores:Vector<Vector<String>>;
	private var currentscore:Vector<String>;
	private var rngmode:Bool = false;
	public var created:Bool = false;
	public var container:Sprite;
	private var timerbackground:Bitmap;
	private var timertext:TextField;
	public var ms:Int = 0;
	public var seconds:Int = 0;
	public var minutes:Int = 0;
	public var pausetimer:Bool = true;
	private var mstext:String = "";
	private var secondstext:String = "";
	private var minutestext:String = "";
	
	public function new() {
		difficultymodes = Vector.ofArray(["Beginner", "Novice", "Hard", "Really hard", "Impossible", "Impossible For Real"]);
		container = new Sprite();
		highscores = new Vector<Vector<String>>();
		currentscore = new Vector<String>();
		for (i in 0...6) {
			var score:Vector<String> = new Vector<String>();
			score[0] = "00";
			score[1] = "00";
			score[2] = "00";
			highscores[i] = score;
		}
		createtimer();
	}
	
	public function createmenu():Void {
		if (!created) {
			if (Std.parseInt(highscores[index][0]) + (Std.parseInt(highscores[index][1]) * 60) < (seconds * 60) + ms || Std.parseInt(highscores[index][2]) < minutes) {
				highscores[index][0] = mstext;
				highscores[index][1] = secondstext;
				highscores[index][2] = minutestext;
			}
			
			startbutton = new EventButton(Universe.assets.button, Universe.assets.buttonclicked, "Start game", 20, startgame);
			startbutton.x = (Universe.stage.stageWidth / 2) - (startbutton.width / 2);
			startbutton.y = Universe.stage.stageHeight - (Universe.stage.stageHeight / 4);
			container.addChild(startbutton);
			colourchanger = new ColourChanger(startbutton, .005, 1.4);
			
			blackblock = new Shape();
			blackblock.graphics.lineStyle(1, 0x000000);
			blackblock.graphics.beginFill(0x000000);
			blackblock.graphics.drawRect(-Universe.stage.stageWidth, (Universe.stage.stageHeight / 2) - 250, Universe.stage.stageWidth * 2, 200);
			blackblock.alpha = .8;
			container.addChild(blackblock);
			
			blocktext = new TextField();
			blocktext.multiline = true;
			blocktext.wordWrap = true;
			blocktext.selectable = false;
			blocktext.width = Universe.stage.stageWidth;
			blocktext.height = 100;
			var textformat:TextFormat = new TextFormat();
			textformat.font = Universe.assets.kenpixelfont.fontName;
			textformat.align = TextFormatAlign.CENTER;
			textformat.size = 25;
			blocktext.embedFonts = true;
			blocktext.defaultTextFormat = textformat;
			blocktext.x = 0;
			blocktext.y = (Universe.stage.stageHeight / 2) - 200;
			updateblocktext();
			blocktext.textColor = 0xFFFFFF;
			container.addChild(blocktext);
			
			Universe.stage.addChild(container);
			container.x = Universe.stage.stageWidth;
			
			turn();
			created = true;
		}
	}
	
	public function createtimer():Void {
		timerbackground = new Bitmap(Universe.assets.timerbackground);
		Universe.stage.addChild(timerbackground);
		timerbackground.x = Universe.stage.stageWidth - timerbackground.width;
		timerbackground.y = 0;
		
		timertext = new TextField();
		timertext.selectable = false;
		timertext.width = timerbackground.width;
		timertext.height = timerbackground.height;
		var textformat:TextFormat = new TextFormat();
		textformat.font = Universe.assets.kenpixelfont.fontName;
		textformat.align = TextFormatAlign.RIGHT;
		textformat.size = 20;
		timertext.embedFonts = true;
		timertext.defaultTextFormat = textformat;
		timertext.x = (Universe.stage.stageWidth - timertext.width) - 5;
		timertext.y = 2;
		timertext.textColor = 0xFFFFFF;
		updatetimertext();
		Universe.stage.addChild(timertext);
	}
	
	public function update():Void {
		if (colourchanger != null) {
			colourchanger.update();
			container.x -= (container.x) / 10;
		}
		Universe.stage.setChildIndex(timerbackground, Universe.stage.numChildren - 1);
		Universe.stage.setChildIndex(timertext, Universe.stage.numChildren - 1);
		
		updatetimertext();
	}
	
	public function removemenu():Void {
		startbutton.remove();
		container.removeChild(startbutton);
		startbutton = null;
		blackblock.graphics.clear();
		container.removeChild(blackblock);
		blackblock = null;
		container.removeChild(blocktext);
		blocktext = null;
		created = false;
		Universe.stage.removeChild(container);
	}
	
	public function startgame():Void {
		if (Universe.stagemanager.pause) { pausetimer = false; ms = 0; seconds = 0; minutes = 0; Universe.stagemanager.reset(); }
	}
	
	public function updateblocktext():Void {
		var time:String = highscores[index][2] + ":" + highscores[index][1] + ":" + highscores[index][0];
		blocktext.htmlText = "<font color='#FFFFFF'>Difficulty: </font><font color='#50a7f0'>" + difficultymodes[index] + "</font><br>Best time: " + time;
		if (index >= 1 && index <= 6) { blocktext.htmlText += "<br><font size='15'>Random obstacles: YES</font>";
		}else {  blocktext.htmlText += "<br><font size='15'>Random obstacles: NO</font>"; }
	}
	
	public function turn():Void {
		if (Universe.stagemanager.pause) {
			Universe.assets.playsfx(3);
			index = Universe.player.rotationindex;
			if (index >= 6) { index = 0; Universe.player.rotationindex = 0; }else if (index < 0) { index = 5; Universe.player.rotationindex = 5; }
			updateblocktext();
			Universe.stagemanager.mode = index;
			Universe.stagemanager.draw();
		}
	}
	
	public function updatetimertext():Void {
		if (!pausetimer) { ++ms; }
		if (ms >= 60) { ms = 0; ++seconds;
		if (seconds >= 60) { seconds = 0; ++minutes; } Universe.stagemanager.secondschanged(); }
		mstext = Std.string(Std.int(ms * (100 / 60))); if (mstext.length == 1) { mstext = "0" + mstext; }
		secondstext = Std.string(seconds); if (secondstext.length == 1) { secondstext = "0" + secondstext; }
		minutestext = Std.string(minutes); if (minutestext.length == 1) { minutestext = "0" + minutestext; }
		timertext.text = minutestext + ":" + secondstext + ":" + mstext;
	}
}
