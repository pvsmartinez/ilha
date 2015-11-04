package core;

import openfl.Assets;
import openfl.media.Sound;
import openfl.display.BitmapData;

class Rs {

  public static var humans:Map<String, BitmapData>;
  public static var tlMaps:Map<String, BitmapData>;
  public static var maters:Map<String, BitmapData>;
  public static var sounds:Map<String, Sound>;
  public static var musics:Map<String, Sound>;

  public static function init() {
    loadHumans();
    loadTlMaps();
    loadMaters();
    loadSounds();
    loadMusics();
  }

  private static function loadHumans() {
    humans = new Map<String, BitmapData>();
    humans.set("townfolk1_f", Assets.getBitmapData("img/spritesheets/townfolk1_f.png"));
  }
  private static function loadTlMaps() {
    tlMaps = new Map<String, BitmapData>();
    tlMaps.set("floor", Assets.getBitmapData("img/tilesets/floor.png"));
    tlMaps.set("trees", Assets.getBitmapData("img/tilesets/trees.png"));
  }
  private static function loadMaters() {
    maters = new Map<String, BitmapData>();
    maters.set("wood", Assets.getBitmapData("img/materials/wood.png"));
    maters.set("cherry", Assets.getBitmapData("img/materials/cherry.png"));
  }
  private static function loadSounds() {
    sounds = new Map<String, Sound>();
    sounds.set("bell", Assets.getSound("sfx/bell.wav"));
    sounds.set("wood", Assets.getSound("sfx/wood.ogg"));
    sounds.set("cherry", Assets.getSound("sfx/cherry.ogg"));
  }
  private static function loadMusics() {
    musics = new Map<String, Sound>();
    musics.set("memory", Assets.getMusic("audio/AMemoryAway.ogg"));
  }

}
