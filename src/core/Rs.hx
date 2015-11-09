package core;

import openfl.Assets;
import openfl.media.Sound;
import openfl.display.BitmapData;

class Rs {

  public static var humans:Array<BitmapData>;
  public static var tlMaps:Map<String, BitmapData>;
  public static var maters:Map<String, BitmapData>;
  public static var stuffs:Map<String, BitmapData>;
  public static var screen:Map<String, BitmapData>;
  public static var sounds:Map<String, Sound>;
  public static var musics:Map<String, Sound>;

  public static function init() {
    loadHumans();
    loadTlMaps();
    loadMaters();
    loadStuffs();
    loadScreen();

    loadSounds();
    loadMusics();
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
    maters.set("fruit", Assets.getBitmapData("img/materials/fruit.png"));
    maters.set("fish", Assets.getBitmapData("img/materials/fish.png"));
    maters.set("stone", Assets.getBitmapData("img/materials/stone.png"));
    maters.set("water", Assets.getBitmapData("img/materials/water.png"));
  }
  private static function loadStuffs() {
    stuffs = new Map<String, BitmapData>();
    stuffs.set("tree", Assets.getBitmapData("img/stuff/tree.png"));
    stuffs.set("bush", Assets.getBitmapData("img/stuff/bush.png"));
    stuffs.set("rock", Assets.getBitmapData("img/stuff/rock.png"));
    stuffs.set("wave", Assets.getBitmapData("img/stuff/wave.png"));
  }
  private static function loadScreen() {
    screen = new Map<String, BitmapData>();
    screen.set("title", Assets.getBitmapData("img/screens/title.png"));
  }

  private static function loadSounds() {
    sounds = new Map<String, Sound>();
    sounds.set("bell", Assets.getSound("sfx/bell.wav"));

    sounds.set("axe0", Assets.getSound("sfx/axe0.ogg"));
    sounds.set("axe1", Assets.getSound("sfx/axe1.ogg"));
    sounds.set("axe2", Assets.getSound("sfx/axe2.ogg"));
    sounds.set("blip", Assets.getSound("sfx/Blip_Select2.ogg"));

    sounds.set("wood0", Assets.getSound("sfx/wood0.ogg"));
    sounds.set("wood1", Assets.getSound("sfx/wood1.ogg"));
    sounds.set("wood2", Assets.getSound("sfx/wood2.ogg"));

    sounds.set("goo", Assets.getSound("sfx/goo.ogg"));
    sounds.set("cherry", Assets.getSound("sfx/cherry.ogg"));
  }
  private static function loadMusics() {
    musics = new Map<String, Sound>();
    musics.set("memory", Assets.getMusic("audio/AMemoryAway.ogg"));
  }

}
