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
		
		path.set ("img/craft/icon/fire.png", "img/craft/icon/fire.png");
		type.set ("img/craft/icon/fire.png", AssetType.IMAGE);
		path.set ("img/craft/icon/fishing.png", "img/craft/icon/fishing.png");
		type.set ("img/craft/icon/fishing.png", AssetType.IMAGE);
		path.set ("img/craft/icon/fishing2.png", "img/craft/icon/fishing2.png");
		type.set ("img/craft/icon/fishing2.png", AssetType.IMAGE);
		path.set ("img/craft/icon/fishing3.png", "img/craft/icon/fishing3.png");
		type.set ("img/craft/icon/fishing3.png", AssetType.IMAGE);
		path.set ("img/craft/icon/plank.png", "img/craft/icon/plank.png");
		type.set ("img/craft/icon/plank.png", AssetType.IMAGE);
		path.set ("img/craft/icon/raft.png", "img/craft/icon/raft.png");
		type.set ("img/craft/icon/raft.png", AssetType.IMAGE);
		path.set ("img/craft/icon/raft2.png", "img/craft/icon/raft2.png");
		type.set ("img/craft/icon/raft2.png", AssetType.IMAGE);
		path.set ("img/craft/icon/rope.png", "img/craft/icon/rope.png");
		type.set ("img/craft/icon/rope.png", AssetType.IMAGE);
		path.set ("img/craft/icon/sail.png", "img/craft/icon/sail.png");
		type.set ("img/craft/icon/sail.png", AssetType.IMAGE);
		path.set ("img/craft/title.png", "img/craft/title.png");
		type.set ("img/craft/title.png", AssetType.IMAGE);
		path.set ("img/humans/bodies/ashley.png", "img/humans/bodies/ashley.png");
		type.set ("img/humans/bodies/ashley.png", AssetType.IMAGE);
		path.set ("img/humans/bodies/john.png", "img/humans/bodies/john.png");
		type.set ("img/humans/bodies/john.png", AssetType.IMAGE);
		path.set ("img/humans/heads/ashley.png", "img/humans/heads/ashley.png");
		type.set ("img/humans/heads/ashley.png", AssetType.IMAGE);
		path.set ("img/humans/heads/john.png", "img/humans/heads/john.png");
		type.set ("img/humans/heads/john.png", AssetType.IMAGE);
		path.set ("img/humans/heads/kevin.png", "img/humans/heads/kevin.png");
		type.set ("img/humans/heads/kevin.png", AssetType.IMAGE);
		path.set ("img/humans/heads/miyagi.png", "img/humans/heads/miyagi.png");
		type.set ("img/humans/heads/miyagi.png", AssetType.IMAGE);
		path.set ("img/humans/heads/simone.png", "img/humans/heads/simone.png");
		type.set ("img/humans/heads/simone.png", AssetType.IMAGE);
		path.set ("img/humans/heads/susan.png", "img/humans/heads/susan.png");
		type.set ("img/humans/heads/susan.png", AssetType.IMAGE);
		path.set ("img/humans/heads/tina.png", "img/humans/heads/tina.png");
		type.set ("img/humans/heads/tina.png", AssetType.IMAGE);
		path.set ("img/materials/fish.png", "img/materials/fish.png");
		type.set ("img/materials/fish.png", AssetType.IMAGE);
		path.set ("img/materials/fruit.png", "img/materials/fruit.png");
		type.set ("img/materials/fruit.png", AssetType.IMAGE);
		path.set ("img/materials/leaf.png", "img/materials/leaf.png");
		type.set ("img/materials/leaf.png", AssetType.IMAGE);
		path.set ("img/materials/plank.png", "img/materials/plank.png");
		type.set ("img/materials/plank.png", AssetType.IMAGE);
		path.set ("img/materials/raft.png", "img/materials/raft.png");
		type.set ("img/materials/raft.png", AssetType.IMAGE);
		path.set ("img/materials/rope.png", "img/materials/rope.png");
		type.set ("img/materials/rope.png", AssetType.IMAGE);
		path.set ("img/materials/sail.png", "img/materials/sail.png");
		type.set ("img/materials/sail.png", AssetType.IMAGE);
		path.set ("img/materials/stone.png", "img/materials/stone.png");
		type.set ("img/materials/stone.png", AssetType.IMAGE);
		path.set ("img/materials/water.png", "img/materials/water.png");
		type.set ("img/materials/water.png", AssetType.IMAGE);
		path.set ("img/materials/wood.png", "img/materials/wood.png");
		type.set ("img/materials/wood.png", AssetType.IMAGE);
		path.set ("img/misc/baloon.png", "img/misc/baloon.png");
		type.set ("img/misc/baloon.png", AssetType.IMAGE);
		path.set ("img/misc/space.png", "img/misc/space.png");
		type.set ("img/misc/space.png", AssetType.IMAGE);
		path.set ("img/misc/thinking.png", "img/misc/thinking.png");
		type.set ("img/misc/thinking.png", AssetType.IMAGE);
		path.set ("img/screens/title.png", "img/screens/title.png");
		type.set ("img/screens/title.png", AssetType.IMAGE);
		path.set ("img/stuff/bush.png", "img/stuff/bush.png");
		type.set ("img/stuff/bush.png", AssetType.IMAGE);
		path.set ("img/stuff/camp/campRef.png", "img/stuff/camp/campRef.png");
		type.set ("img/stuff/camp/campRef.png", AssetType.IMAGE);
		path.set ("img/stuff/camp/fence.png", "img/stuff/camp/fence.png");
		type.set ("img/stuff/camp/fence.png", AssetType.IMAGE);
		path.set ("img/stuff/camp/floor.png", "img/stuff/camp/floor.png");
		type.set ("img/stuff/camp/floor.png", AssetType.IMAGE);
		path.set ("img/stuff/camp/tent1.png", "img/stuff/camp/tent1.png");
		type.set ("img/stuff/camp/tent1.png", AssetType.IMAGE);
		path.set ("img/stuff/camp/tent2.png", "img/stuff/camp/tent2.png");
		type.set ("img/stuff/camp/tent2.png", AssetType.IMAGE);
		path.set ("img/stuff/camp/tent3.png", "img/stuff/camp/tent3.png");
		type.set ("img/stuff/camp/tent3.png", AssetType.IMAGE);
		path.set ("img/stuff/camp/tent4.png", "img/stuff/camp/tent4.png");
		type.set ("img/stuff/camp/tent4.png", AssetType.IMAGE);
		path.set ("img/stuff/grass.png", "img/stuff/grass.png");
		type.set ("img/stuff/grass.png", AssetType.IMAGE);
		path.set ("img/stuff/rock.png", "img/stuff/rock.png");
		type.set ("img/stuff/rock.png", AssetType.IMAGE);
		path.set ("img/stuff/tree.png", "img/stuff/tree.png");
		type.set ("img/stuff/tree.png", AssetType.IMAGE);
		path.set ("img/stuff/wave.png", "img/stuff/wave.png");
		type.set ("img/stuff/wave.png", AssetType.IMAGE);
		path.set ("img/textures/sand.png", "img/textures/sand.png");
		type.set ("img/textures/sand.png", AssetType.IMAGE);
		path.set ("img/textures/sea.png", "img/textures/sea.png");
		type.set ("img/textures/sea.png", AssetType.IMAGE);
		path.set ("img/ui/days.png", "img/ui/days.png");
		type.set ("img/ui/days.png", AssetType.IMAGE);
		path.set ("img/ui/map.png", "img/ui/map.png");
		type.set ("img/ui/map.png", AssetType.IMAGE);
		path.set ("img/ui/tools/axe.png", "img/ui/tools/axe.png");
		type.set ("img/ui/tools/axe.png", AssetType.IMAGE);
		path.set ("img/ui/tools/knife.png", "img/ui/tools/knife.png");
		type.set ("img/ui/tools/knife.png", AssetType.IMAGE);
		path.set ("img/ui/tools/pick.png", "img/ui/tools/pick.png");
		type.set ("img/ui/tools/pick.png", AssetType.IMAGE);
		path.set ("img/ui/tools/rod.png", "img/ui/tools/rod.png");
		type.set ("img/ui/tools/rod.png", AssetType.IMAGE);
		path.set ("font/pixelart.ttf", "font/pixelart.ttf");
		type.set ("font/pixelart.ttf", AssetType.FONT);
		path.set ("sfx/axe0.ogg", "sfx/axe0.ogg");
		type.set ("sfx/axe0.ogg", AssetType.SOUND);
		path.set ("sfx/axe1.ogg", "sfx/axe1.ogg");
		type.set ("sfx/axe1.ogg", AssetType.SOUND);
		path.set ("sfx/axe2.ogg", "sfx/axe2.ogg");
		type.set ("sfx/axe2.ogg", AssetType.SOUND);
		path.set ("sfx/bell.wav", "sfx/bell.wav");
		type.set ("sfx/bell.wav", AssetType.SOUND);
		path.set ("sfx/Blip_Select2.ogg", "sfx/Blip_Select2.ogg");
		type.set ("sfx/Blip_Select2.ogg", AssetType.SOUND);
		path.set ("sfx/cherry.ogg", "sfx/cherry.ogg");
		type.set ("sfx/cherry.ogg", AssetType.SOUND);
		path.set ("sfx/goo.ogg", "sfx/goo.ogg");
		type.set ("sfx/goo.ogg", AssetType.SOUND);
		path.set ("sfx/Randomize15.ogg", "sfx/Randomize15.ogg");
		type.set ("sfx/Randomize15.ogg", AssetType.SOUND);
		path.set ("sfx/smash.ogg", "sfx/smash.ogg");
		type.set ("sfx/smash.ogg", AssetType.SOUND);
		path.set ("sfx/wood0.ogg", "sfx/wood0.ogg");
		type.set ("sfx/wood0.ogg", AssetType.SOUND);
		path.set ("sfx/wood1.ogg", "sfx/wood1.ogg");
		type.set ("sfx/wood1.ogg", AssetType.SOUND);
		path.set ("sfx/wood2.ogg", "sfx/wood2.ogg");
		type.set ("sfx/wood2.ogg", AssetType.SOUND);
		path.set ("audio/AMemoryAway.ogg", "audio/AMemoryAway.ogg");
		type.set ("audio/AMemoryAway.ogg", AssetType.MUSIC);
		path.set ("audio/Blip_Select2.ogg", "audio/Blip_Select2.ogg");
		type.set ("audio/Blip_Select2.ogg", AssetType.SOUND);
		path.set ("audio/Randomize15.ogg", "audio/Randomize15.ogg");
		type.set ("audio/Randomize15.ogg", AssetType.SOUND);
		
		
		#elseif html5
		
		var id;
		id = "img/craft/icon/fire.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/icon/fishing.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/icon/fishing2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/icon/fishing3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/icon/plank.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/icon/raft.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/icon/raft2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/icon/rope.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/icon/sail.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/craft/title.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/bodies/ashley.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/bodies/john.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/heads/ashley.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/heads/john.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/heads/kevin.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/heads/miyagi.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/heads/simone.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/heads/susan.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/humans/heads/tina.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/fish.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/fruit.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/leaf.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/plank.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/raft.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/rope.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/sail.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/stone.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/water.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/materials/wood.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/misc/baloon.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/misc/space.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/misc/thinking.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/screens/title.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/bush.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/camp/campRef.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/camp/fence.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/camp/floor.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/camp/tent1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/camp/tent2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/camp/tent3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/camp/tent4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/grass.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/rock.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/tree.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/stuff/wave.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/textures/sand.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/textures/sea.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/ui/days.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/ui/map.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/ui/tools/axe.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/ui/tools/knife.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/ui/tools/pick.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/ui/tools/rod.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "font/pixelart.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "sfx/axe0.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/axe1.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/axe2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/bell.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/Blip_Select2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/cherry.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/goo.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/Randomize15.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/smash.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/wood0.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/wood1.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "sfx/wood2.ogg";
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