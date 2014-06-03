package core.build.game.managers;

import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.display.Sprite;
import flash.events.Event;
import flash.media.Sound;
import flash.media.SoundChannel;
import flash.media.SoundTransform;
import flash.net.URLRequest;
import flash.text.Font;
import flash.utils.ByteArray;
import flash.Vector.Vector;
import openfl.Assets;

/**
 * ...
 * @author Richman Stewart
 */

class AssetManager {
	
	//texture variables
	public var button:BitmapData;
	public var buttonclicked:BitmapData;
	public var timerbackground:BitmapData;
	public var kenpixelfont:Font;
	
	//sound variables
	public var musiclist:Vector<Sound>;
	public var juicyfruit:Sound;
	public var hexagoncore:Sound;
	public var alienate:Sound;
	public var normalise:Sound;
	public var chiptune:Sound;
	public var disco:Sound;
	public var soundchannel:SoundChannel;
	public var soundtransform:SoundTransform;
	public var currentlyplaying:Sound;
	
	//soundeffect variables
	public var sfxlist:Vector<Sound>;
	public var explosion:Sound;
	public var enterexplosion:Sound;
	public var select:Sound;
	public var mouseover:Sound;
	public var sfxchannel:SoundChannel;
	public var sfxtransform:SoundTransform;
	
	public function new():Void {
		button = Assets.getBitmapData("assets/textures/button.png");
		buttonclicked = Assets.getBitmapData("assets/textures/buttonclicked.png");
		timerbackground = Assets.getBitmapData("assets/textures/timerbackground.png");
		kenpixelfont = Assets.getFont("assets/textures/kenvector.ttf");
		
		soundtransform = new SoundTransform();
		juicyfruit = Assets.getSound("assets/sound/juicyfruit.ogg");
		hexagoncore = Assets.getSound("assets/sound/hexagoncore.ogg");
		alienate = Assets.getSound("assets/sound/alienate.ogg");
		normalise = Assets.getSound("assets/sound/normalise.ogg");
		chiptune = Assets.getSound("assets/sound/chiptune.ogg");
		disco = Assets.getSound("assets/sound/disco.ogg");
		
		musiclist = new Vector<Sound>();
		musiclist.push(juicyfruit);
		musiclist.push(hexagoncore);
		musiclist.push(alienate);
		musiclist.push(normalise);
		musiclist.push(chiptune);
		musiclist.push(disco);
		
		sfxtransform = new SoundTransform();
		explosion = Assets.getSound("assets/sfx/explosion.ogg");
		enterexplosion = Assets.getSound("assets/sfx/enterexplosion.ogg");
		select = Assets.getSound("assets/sfx/select.ogg");
		mouseover = Assets.getSound("assets/sfx/mouseover.ogg");
		
		sfxlist = new Vector<Sound>();
		sfxlist.push(explosion);
		sfxlist.push(enterexplosion);
		sfxlist.push(select);
		sfxlist.push(mouseover);
	}
	
	public function playsound(id:Int, force:Bool = false):Void {
		if (id >= 0 && id <= musiclist.length - 1) {
			if (currentlyplaying != musiclist[id] || force) {
				stopsound();
				var length:Int = (2048 * 8) * 8; if (id == 2) { length = (1024 * 8) * 8; }
				soundchannel = musiclist[id].play(Std.int(Math.random() * length), 99, soundtransform);
				soundtransform.volume = 1;
				soundchannel.soundTransform = soundtransform;
				currentlyplaying = musiclist[id];
			}
		}
	}
	
	public function stopsound():Void {
		if (soundchannel == null) { return; }
		soundchannel.stop();
	}
	
	public function playsfx(id:Int):Void {
		stopsfx();
		sfxchannel = sfxlist[id].play(0, 0, sfxtransform);
		sfxtransform.volume = 1;
		sfxchannel.soundTransform = sfxtransform;
	}
	
	public function stopsfx():Void {
		if (sfxchannel == null) { return; }
		sfxchannel.stop();
	}
}
