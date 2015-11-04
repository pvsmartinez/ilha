package core;

import openfl.Assets;
import openfl.display.BitmapData;

class Rs {

  public static var humans:Array<BitmapData>;
  public static var tlMaps:Map<String, BitmapData>;
  public static var maters:Map<String, BitmapData>;

  public static function init() {
    loadHumans();
    loadTlMaps();
    loadMaters();
  }

  private static function loadHumans() {
    humans = [];
    humans.push(Assets.getBitmapData("img/humans/townfolk1_f.png"));
    humans.push(Assets.getBitmapData("img/humans/townfolk1_m.png"));
    humans.push(Assets.getBitmapData("img/humans/mage_f.png"));
    humans.push(Assets.getBitmapData("img/humans/mage_m.png"));
    humans.push(Assets.getBitmapData("img/humans/healer_f.png"));
    humans.push(Assets.getBitmapData("img/humans/healer_m.png"));
    humans.push(Assets.getBitmapData("img/humans/ranger_f.png"));
    humans.push(Assets.getBitmapData("img/humans/ranger_m.png"));
    humans.push(Assets.getBitmapData("img/humans/ninja_f.png"));
    humans.push(Assets.getBitmapData("img/humans/ninja_m.png"));
    humans.push(Assets.getBitmapData("img/humans/warrior_f.png"));
    humans.push(Assets.getBitmapData("img/humans/warrior_m.png"));
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
