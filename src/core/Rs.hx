package core;

import openfl.Assets;
import openfl.display.BitmapData;

class Rs {

  public static var humans:Map<String, BitmapData>;
  public static var tlMaps:Map<String, BitmapData>;
  public static var maters:Map<String, BitmapData>;

  public static function init() {
    loadHumans();
    loadTlMaps();
    loadMaters();
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

}
