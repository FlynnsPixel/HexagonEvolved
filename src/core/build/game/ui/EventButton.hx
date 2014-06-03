package core.build.game.ui;

import core.build.game.managers.Universe;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import flash.events.MouseEvent;
import flash.events.TouchEvent;
import flash.text.TextField;
import flash.text.TextFormat;
import flash.text.TextFormatAlign;
import haxe.macro.Expr.Function;
import sys.db.Object;

/**
 * ...
 * @author Richman Stewart
 */

class EventButton extends Sprite {
	
	//eventbutton variables
	public var base:Bitmap;
	public var text:TextField;
	public var mouseovertexturedata:BitmapData;
	public var texturedata:BitmapData;
	public var onclickfunction:Void->Void;
	
	public function new(texture:BitmapData, mouseovertexture:BitmapData, message:String, size:Int = 20, clickfunction:Void->Void = null) {
		super();
		base = new Bitmap(texture);
		addChild(base);
		
		text = new TextField();
		text.width = base.width;
		text.height = base.height;
		text.selectable = false;
		text.mouseEnabled = false;
		var textformat:TextFormat = new TextFormat();
		textformat.font = Universe.assets.kenpixelfont.fontName;
		textformat.size = size;
		textformat.align = TextFormatAlign.CENTER;
		text.embedFonts = true;
		text.defaultTextFormat = textformat;
		text.text = message;
		text.textColor = 0xFFFFFF;
		text.y = (base.height / 2) - (text.textHeight / 1.5);
		addChild(text);
		
		mouseovertexturedata = mouseovertexture;
		texturedata = texture;
		onclickfunction = clickfunction;
		
		#if android
		addEventListener(TouchEvent.TOUCH_BEGIN, touchbegin);
		addEventListener(TouchEvent.TOUCH_END, touchend);
		addEventListener(TouchEvent.TOUCH_OVER, touchover);
		addEventListener(TouchEvent.TOUCH_OUT, touchout);
		#else
		addEventListener(MouseEvent.MOUSE_DOWN, mousedown);
		addEventListener(MouseEvent.MOUSE_UP, mouseup);
		addEventListener(MouseEvent.MOUSE_OVER, mouseover);
		addEventListener(MouseEvent.MOUSE_OUT, mouseout);
		#end
	}
	
	public function remove():Void {
		removeChild(base);
		removeChild(text);
		base = null;
		text = null;
		
		#if android
		removeEventListener(TouchEvent.TOUCH_BEGIN, touchbegin);
		removeEventListener(TouchEvent.TOUCH_END, touchend);
		removeEventListener(TouchEvent.TOUCH_OVER, touchover);
		removeEventListener(TouchEvent.TOUCH_OUT, touchout);
		#else
		removeEventListener(MouseEvent.MOUSE_DOWN, mousedown);
		removeEventListener(MouseEvent.MOUSE_UP, mouseup);
		removeEventListener(MouseEvent.MOUSE_OVER, mouseover);
		removeEventListener(MouseEvent.MOUSE_OUT, mouseout);
		#end
	}
	
	private function touchbegin(event:TouchEvent):Void {
		base.bitmapData = mouseovertexturedata;
	}
	
	private function touchend(event:TouchEvent):Void {
		if (onclickfunction != null) { onclickfunction(); }
	}
	
	private function touchover(event:TouchEvent):Void {
		if (base.bitmapData != mouseovertexturedata) { Universe.assets.playsfx(2); }
		base.bitmapData = mouseovertexturedata;
	}
	
	private function touchout(event:TouchEvent):Void {
		base.bitmapData = texturedata;
	}
	
	private function mousedown(event:MouseEvent):Void {
		base.bitmapData = mouseovertexturedata;
	}
	
	private function mouseup(event:MouseEvent):Void {
		if (onclickfunction != null) { onclickfunction(); }
	}
	
	private function mouseover(event:MouseEvent):Void {
		if (base.bitmapData != mouseovertexturedata) { Universe.assets.playsfx(2); }
		base.bitmapData = mouseovertexturedata;
	}
	
	private function mouseout(event:MouseEvent):Void {
		base.bitmapData = texturedata;
	}
}
