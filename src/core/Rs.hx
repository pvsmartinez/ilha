package core;

import openfl.Assets;
import openfl.media.Sound;
import openfl.display.BitmapData;

class Rs {

  public static var screen:Map<String, BitmapData>;
  public static var uis:Map<String, BitmapData>;

  public static var humans:Array<BitmapData>;
  public static var tools:Map<String, BitmapData>;

  public static var maters:Map<String, BitmapData>;
  public static var stuffs:Map<String, BitmapData>;
  public static var miscs:Map<String, BitmapData>;
  public static var sounds:Map<String, Sound>;
  public static var musics:Map<String, Sound>;

  public static function init() {
    loadUis();
    loadScreen();
    loadHumans();
    loadMaters();
    loadStuffs();
    loadMiscs();

    loadSounds();
    loadMusics();
  }
  private static function loadHumans() {
    humans = [];
    humans.push(Assets.getBitmapData("img/humans/char.png"));
  }
  private static function loadMaters() {
    maters = new Map<String, BitmapData>();
    maters.set("wood", Assets.getBitmapData("img/materials/wood.png"));
    maters.set("fruit", Assets.getBitmapData("img/materials/fruit.png"));
    maters.set("fish", Assets.getBitmapData("img/materials/fish.png"));
    maters.set("stone", Assets.getBitmapData("img/materials/stone.png"));
    maters.set("water", Assets.getBitmapData("img/materials/water.png"));
    maters.set("leaf", Assets.getBitmapData("img/materials/leaf.png"));

    maters.set("plank", Assets.getBitmapData("img/materials/plank.png"));
    maters.set("rope", Assets.getBitmapData("img/materials/rope.png"));
    maters.set("sail", Assets.getBitmapData("img/materials/sail.png"));
    maters.set("raft", Assets.getBitmapData("img/materials/raft.png"));
  }
  private static function loadStuffs() {
    stuffs = new Map<String, BitmapData>();
    stuffs.set("grass", Assets.getBitmapData("img/stuff/grass.png"));
    stuffs.set("tree", Assets.getBitmapData("img/stuff/tree.png"));
    stuffs.set("bush", Assets.getBitmapData("img/stuff/bush.png"));
    stuffs.set("rock", Assets.getBitmapData("img/stuff/rock.png"));
    stuffs.set("wave", Assets.getBitmapData("img/stuff/wave.png"));
    stuffs.set("camp", Assets.getBitmapData("img/stuff/camp.png"));
    stuffs.set("tent", Assets.getBitmapData("img/stuff/tent.png"));
  }
  private static function loadMiscs() {
    miscs = new Map<String, BitmapData>();
    miscs.set("speech_ballon", Assets.getBitmapData("img/misc/speech_balloon.png"));
  }
  private static function loadUis() {
    uis = new Map<String, BitmapData>();
    uis.set("map", Assets.getBitmapData("img/ui/map.png"));
    uis.set("head1", Assets.getBitmapData("img/ui/heads/head1.png"));
    uis.set("head2", Assets.getBitmapData("img/ui/heads/head2.png"));
    uis.set("head3", Assets.getBitmapData("img/ui/heads/head3.png"));
    uis.set("head4", Assets.getBitmapData("img/ui/heads/head4.png"));
    uis.set("head5", Assets.getBitmapData("img/ui/heads/head5.png"));
    uis.set("head6", Assets.getBitmapData("img/ui/heads/head6.png"));
    uis.set("head7", Assets.getBitmapData("img/ui/heads/head7.png"));
    uis.set("axe", Assets.getBitmapData("img/ui/tools/axe.png"));
    uis.set("knife", Assets.getBitmapData("img/ui/tools/knife.png"));
    uis.set("pick", Assets.getBitmapData("img/ui/tools/pick.png"));
    uis.set("rod", Assets.getBitmapData("img/ui/tools/rod.png"));
    // TODO
    uis.set("spear", Assets.getBitmapData("img/ui/tools/axe.png"));
    uis.set("hand", Assets.getBitmapData("img/ui/tools/axe.png"));
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
    sounds.set("smash", Assets.getSound("sfx/smash.ogg"));
  }
  private static function loadMusics() {
    musics = new Map<String, Sound>();
    musics.set("memory", Assets.getMusic("audio/AMemoryAway.ogg"));
  }

}
