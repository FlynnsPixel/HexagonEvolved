package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.MovieClip;
import flash.text.Font;
import flash.media.Sound;
import flash.net.URLRequest;
import flash.utils.ByteArray;
import haxe.Unserializer;
import openfl.Assets;

#if (flash || js)
import flash.display.Loader;
import flash.events.Event;
import flash.net.URLLoader;
#end

#if ios
import openfl.utils.SystemPath;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public static var className (default, null) = new Map <String, Dynamic> ();
	public static var path (default, null) = new Map <String, String> ();
	public static var type (default, null) = new Map <String, AssetType> ();
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/openfl.svg", __ASSET__assets_openfl_svg);
		type.set ("assets/openfl.svg", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/sfx/enterexplosion.ogg", __ASSET__assets_sfx_enterexplosion_ogg);
		type.set ("assets/sfx/enterexplosion.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/explosion.ogg", __ASSET__assets_sfx_explosion_ogg);
		type.set ("assets/sfx/explosion.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/mouseover.ogg", __ASSET__assets_sfx_mouseover_ogg);
		type.set ("assets/sfx/mouseover.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/select.ogg", __ASSET__assets_sfx_select_ogg);
		type.set ("assets/sfx/select.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sound/alienate.ogg", __ASSET__assets_sound_alienate_ogg);
		type.set ("assets/sound/alienate.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/chiptune.ogg", __ASSET__assets_sound_chiptune_ogg);
		type.set ("assets/sound/chiptune.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/disco.ogg", __ASSET__assets_sound_disco_ogg);
		type.set ("assets/sound/disco.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/hexagoncore.ogg", __ASSET__assets_sound_hexagoncore_ogg);
		type.set ("assets/sound/hexagoncore.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/juicyfruit.ogg", __ASSET__assets_sound_juicyfruit_ogg);
		type.set ("assets/sound/juicyfruit.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/normalise.ogg", __ASSET__assets_sound_normalise_ogg);
		type.set ("assets/sound/normalise.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/textures/button.png", __ASSET__assets_textures_button_png);
		type.set ("assets/textures/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/textures/buttonclicked.png", __ASSET__assets_textures_buttonclicked_png);
		type.set ("assets/textures/buttonclicked.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/textures/kenvector.ttf", __ASSET__assets_textures_kenvector_ttf);
		type.set ("assets/textures/kenvector.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
		className.set ("assets/textures/timerbackground.png", __ASSET__assets_textures_timerbackground_png);
		type.set ("assets/textures/timerbackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/sound/alienate.ogg", __ASSET__assets_sound_alienate_ogg1);
		type.set ("assets/sound/alienate.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/chiptune.ogg", __ASSET__assets_sound_chiptune_ogg1);
		type.set ("assets/sound/chiptune.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/disco.ogg", __ASSET__assets_sound_disco_ogg1);
		type.set ("assets/sound/disco.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/hexagoncore.ogg", __ASSET__assets_sound_hexagoncore_ogg1);
		type.set ("assets/sound/hexagoncore.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/juicyfruit.ogg", __ASSET__assets_sound_juicyfruit_ogg1);
		type.set ("assets/sound/juicyfruit.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sound/normalise.ogg", __ASSET__assets_sound_normalise_ogg1);
		type.set ("assets/sound/normalise.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/textures/button.png", __ASSET__assets_textures_button_png1);
		type.set ("assets/textures/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/textures/buttonclicked.png", __ASSET__assets_textures_buttonclicked_png1);
		type.set ("assets/textures/buttonclicked.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/textures/kenvector.ttf", __ASSET__assets_textures_kenvector_ttf1);
		type.set ("assets/textures/kenvector.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
		className.set ("assets/textures/timerbackground.png", __ASSET__assets_textures_timerbackground_png1);
		type.set ("assets/textures/timerbackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		
		#elseif html5
		
		path.set ("assets/openfl.svg", "assets/openfl.svg");
		type.set ("assets/openfl.svg", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/sfx/enterexplosion.ogg", "assets/sfx/enterexplosion.ogg");
		type.set ("assets/sfx/enterexplosion.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/explosion.ogg", "assets/sfx/explosion.ogg");
		type.set ("assets/sfx/explosion.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/mouseover.ogg", "assets/sfx/mouseover.ogg");
		type.set ("assets/sfx/mouseover.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/select.ogg", "assets/sfx/select.ogg");
		type.set ("assets/sfx/select.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sound/alienate.ogg", "assets/sound/alienate.ogg");
		type.set ("assets/sound/alienate.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/chiptune.ogg", "assets/sound/chiptune.ogg");
		type.set ("assets/sound/chiptune.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/disco.ogg", "assets/sound/disco.ogg");
		type.set ("assets/sound/disco.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/hexagoncore.ogg", "assets/sound/hexagoncore.ogg");
		type.set ("assets/sound/hexagoncore.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/juicyfruit.ogg", "assets/sound/juicyfruit.ogg");
		type.set ("assets/sound/juicyfruit.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/normalise.ogg", "assets/sound/normalise.ogg");
		type.set ("assets/sound/normalise.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/textures/button.png", "assets/textures/button.png");
		type.set ("assets/textures/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/textures/buttonclicked.png", "assets/textures/buttonclicked.png");
		type.set ("assets/textures/buttonclicked.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/textures/kenvector.ttf", __ASSET__assets_textures_kenvector_ttf);
		type.set ("assets/textures/kenvector.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
		path.set ("assets/textures/timerbackground.png", "assets/textures/timerbackground.png");
		type.set ("assets/textures/timerbackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/sound/alienate.ogg", "assets/sound/alienate.ogg");
		type.set ("assets/sound/alienate.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/chiptune.ogg", "assets/sound/chiptune.ogg");
		type.set ("assets/sound/chiptune.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/disco.ogg", "assets/sound/disco.ogg");
		type.set ("assets/sound/disco.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/hexagoncore.ogg", "assets/sound/hexagoncore.ogg");
		type.set ("assets/sound/hexagoncore.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/juicyfruit.ogg", "assets/sound/juicyfruit.ogg");
		type.set ("assets/sound/juicyfruit.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sound/normalise.ogg", "assets/sound/normalise.ogg");
		type.set ("assets/sound/normalise.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/textures/button.png", "assets/textures/button.png");
		type.set ("assets/textures/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/textures/buttonclicked.png", "assets/textures/buttonclicked.png");
		type.set ("assets/textures/buttonclicked.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/textures/kenvector.ttf", __ASSET__assets_textures_kenvector_ttf1);
		type.set ("assets/textures/kenvector.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
		path.set ("assets/textures/timerbackground.png", "assets/textures/timerbackground.png");
		type.set ("assets/textures/timerbackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		
		#else
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<AssetData> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							path.set (asset.id, asset.path);
							type.set (asset.id, asset.type);
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest");
				
			}
			
		} catch (e:Dynamic) {
			
			trace ("Warning: Could not load asset manifest");
			
		}
		
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = DefaultAssetLibrary.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if pixi
		
		return null;
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		//return null;		
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash

class __ASSET__assets_openfl_svg extends null { }
class __ASSET__assets_sfx_enterexplosion_ogg extends null { }
class __ASSET__assets_sfx_explosion_ogg extends null { }
class __ASSET__assets_sfx_mouseover_ogg extends null { }
class __ASSET__assets_sfx_select_ogg extends null { }
class __ASSET__assets_sound_alienate_ogg extends null { }
class __ASSET__assets_sound_chiptune_ogg extends null { }
class __ASSET__assets_sound_disco_ogg extends null { }
class __ASSET__assets_sound_hexagoncore_ogg extends null { }
class __ASSET__assets_sound_juicyfruit_ogg extends null { }
class __ASSET__assets_sound_normalise_ogg extends null { }
class __ASSET__assets_textures_button_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_textures_buttonclicked_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_textures_kenvector_ttf extends null { }
class __ASSET__assets_textures_timerbackground_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_sound_alienate_ogg1 extends null { }
class __ASSET__assets_sound_chiptune_ogg1 extends null { }
class __ASSET__assets_sound_disco_ogg1 extends null { }
class __ASSET__assets_sound_hexagoncore_ogg1 extends null { }
class __ASSET__assets_sound_juicyfruit_ogg1 extends null { }
class __ASSET__assets_sound_normalise_ogg1 extends null { }
class __ASSET__assets_textures_button_png1 extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_textures_buttonclicked_png1 extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_textures_kenvector_ttf1 extends null { }
class __ASSET__assets_textures_timerbackground_png1 extends flash.display.BitmapData { public function new () { super (0, 0); } }


#elseif html5














class __ASSET__assets_textures_kenvector_ttf extends flash.text.Font { }









class __ASSET__assets_textures_kenvector_ttf1 extends flash.text.Font { }



#end