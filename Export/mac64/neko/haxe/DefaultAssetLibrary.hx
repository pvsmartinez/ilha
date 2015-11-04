package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__font_pixelart_ttf);
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		path.set ("img/humans/healer_f.png", "img/humans/healer_f.png");
		type.set ("img/humans/healer_f.png", AssetType.IMAGE);
		path.set ("img/humans/healer_m.png", "img/humans/healer_m.png");
		type.set ("img/humans/healer_m.png", AssetType.IMAGE);
		path.set ("img/humans/mage_f.png", "img/humans/mage_f.png");
		type.set ("img/humans/mage_f.png", AssetType.IMAGE);
		path.set ("img/humans/mage_m.png", "img/humans/mage_m.png");
		type.set ("img/humans/mage_m.png", AssetType.IMAGE);
		path.set ("img/humans/ninja_f.png", "img/humans/ninja_f.png");
		type.set ("img/humans/ninja_f.png", AssetType.IMAGE);
		path.set ("img/humans/ninja_m.png", "img/humans/ninja_m.png");
		type.set ("img/humans/ninja_m.png", AssetType.IMAGE);
		path.set ("img/humans/ranger_f.png", "img/humans/ranger_f.png");
		type.set ("img/humans/ranger_f.png", AssetType.IMAGE);
		path.set ("img/humans/ranger_m.png", "img/humans/ranger_m.png");
		type.set ("img/humans/ranger_m.png", AssetType.IMAGE);
		path.set ("img/humans/townfolk1_f.png", "img/humans/townfolk1_f.png");
		type.set ("img/humans/townfolk1_f.png", AssetType.IMAGE);
		path.set ("img/humans/townfolk1_m.png", "img/humans/townfolk1_m.png");
		type.set ("img/humans/townfolk1_m.png", AssetType.IMAGE);
		path.set ("img/humans/warrior_f.png", "img/humans/warrior_f.png");
		type.set ("img/humans/warrior_f.png", AssetType.IMAGE);
		path.set ("img/humans/warrior_m.png", "img/humans/warrior_m.png");
		type.set ("img/humans/warrior_m.png", AssetType.IMAGE);
		path.set ("img/materials/cherry.png", "img/materials/cherry.png");
		type.set ("img/materials/cherry.png", AssetType.IMAGE);
		path.set ("img/materials/wood.png", "img/materials/wood.png");
		type.set ("img/materials/wood.png", AssetType.IMAGE);
		path.set ("img/tilesets/floor.png", "img/tilesets/floor.png");
		type.set ("img/tilesets/floor.png", AssetType.IMAGE);
		path.set ("img/tilesets/trees.png", "img/tilesets/trees.png");
		type.set ("img/tilesets/trees.png", AssetType.IMAGE);
		path.set ("font/pixelart.ttf", "font/pixelart.ttf");
		type.set ("font/pixelart.ttf", AssetType.FONT);
		path.set ("sfx/bell.wav", "sfx/bell.wav");
		type.set ("sfx/bell.wav", AssetType.SOUND);
		path.set ("sfx/Blip_Select2.ogg", "sfx/Blip_Select2.ogg");
		type.set ("sfx/Blip_Select2.ogg", AssetType.SOUND);
		path.set ("sfx/cherry.ogg", "sfx/cherry.ogg");
		type.set ("sfx/cherry.ogg", AssetType.SOUND);
		path.set ("sfx/Randomize15.ogg", "sfx/Randomize15.ogg");
		type.set ("sfx/Randomize15.ogg", AssetType.SOUND);
		path.set ("sfx/wood.ogg", "sfx/wood.ogg");
		type.set ("sfx/wood.ogg", AssetType.SOUND);
		path.set ("audio/AMemoryAway.ogg", "audio/AMemoryAway.ogg");
		type.set ("audio/AMemoryAway.ogg", AssetType.MUSIC);
		path.set ("audio/Blip_Select2.ogg", "audio/Blip_Select2.ogg");
		type.set ("audio/Blip_Select2.ogg", AssetType.SOUND);
		path.set ("audio/Randomize15.ogg", "audio/Randomize15.ogg");
		type.set ("audio/Randomize15.ogg", AssetType.SOUND);
		path.set ("info/floorMap.json", "info/floorMap.json");
		type.set ("info/floorMap.json", AssetType.TEXT);
		path.set ("info/treeMap.json", "info/treeMap.json");
		type.set ("info/treeMap.json", AssetType.TEXT);
		
		
		#elseif html5
		
		var id;
		id = "img/humans/healer_f.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/healer_m.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/mage_f.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/mage_m.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/ninja_f.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/ninja_m.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/ranger_f.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/ranger_m.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/townfolk1_f.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/townfolk1_m.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/warrior_f.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/warrior_m.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/cherry.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/wood.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/tilesets/floor.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/tilesets/trees.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "font/pixelart.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "sfx/bell.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/Blip_Select2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/cherry.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/Randomize15.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/wood.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "audio/AMemoryAway.ogg";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "audio/Blip_Select2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "audio/Randomize15.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "info/floorMap.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "info/treeMap.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("font/pixelart.ttf", __ASSET__font_pixelart_ttf);
		type.set ("font/pixelart.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
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
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<ByteArray> {
		
		var promise = new Promise<ByteArray> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, e) {
				
				promise.error (e);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<ByteArray> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id);
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, msg) promise.error (msg));
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.readUTFBytes (bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash






























#elseif html5

















@:keep #if display private #end class __ASSET__font_pixelart_ttf extends lime.text.Font { public function new () { super (); name = "Pixel-Art Regular"; } } 












#else

@:keep #if display private #end class __ASSET__font_pixelart_ttf extends lime.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "font/pixelart.ttf"; name = "Pixel-Art Regular"; super (); }}


#if (windows || mac || linux || cpp)





#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__font_pixelart_ttf extends openfl.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "font/pixelart.ttf"; name = "Pixel-Art Regular"; super (); }}

#end

#end