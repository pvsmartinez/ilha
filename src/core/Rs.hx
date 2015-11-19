package core;

import openfl.Assets;
import openfl.media.Sound;
import openfl.display.BitmapData;

class Rs {

  public static var names:Array<String>;
  public static var humans:Map<String, BitmapData>;
  public static var heads:Map<String, BitmapData>;

  public static var uis:Map<String, BitmapData>;
  public static var tools:Map<String, BitmapData>;
  public static var craft:Map<String, BitmapData>;

  public static var stuffs:Map<String, BitmapData>;
  public static var maters:Map<String, BitmapData>;
  public static var camp:Map<String, BitmapData>;

  public static var screen:Map<String, BitmapData>;
  public static var textures:Map<String, BitmapData>;
  public static var miscs:Map<String, BitmapData>;
  public static var sounds:Map<String, Sound>;
  public static var musics:Map<String, Sound>;

  public static function init() {
    loadScreen();
    loadTextures();

    loadHumans();
    loadStuffs();
    loadMiscs();
    loadUis();

    loadSounds();
    loadMusics();
  }
  private static function loadScreen() {
    screen = new Map<String, BitmapData>();
    screen.set("title", Assets.getBitmapData("img/screens/title.png"));
  }
  private static function loadTextures() {
    textures = new Map<String, BitmapData>();
    textures.set("sea", Assets.getBitmapData("img/textures/sea.png"));
    textures.set("sand", Assets.getBitmapData("img/textures/sand.png"));
  }
  private static function loadHumans() {
    names = ["ashley","john"];
    //names = ["ashley","john","kevin","simone","susan","tina","miyagi"];
    humans = new Map<String, BitmapData>();
    heads = new Map<String, BitmapData>();
    for (i in 0...names.length) {
      humans.set(names[i], Assets.getBitmapData("img/humans/bodies/"+names[i]+".png"));
      heads.set(names[i], Assets.getBitmapData("img/humans/heads/"+names[i]+".png"));
    }
  }
  private static function loadStuffs() {
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
    stuffs = new Map<String, BitmapData>();
    stuffs.set("grass", Assets.getBitmapData("img/stuff/grass.png"));
    stuffs.set("tree", Assets.getBitmapData("img/stuff/tree.png"));
    stuffs.set("bush", Assets.getBitmapData("img/stuff/bush.png"));
    stuffs.set("rock", Assets.getBitmapData("img/stuff/rock.png"));
    stuffs.set("wave", Assets.getBitmapData("img/stuff/wave.png"));
    camp = new Map<String, BitmapData>();
    camp.set("floor", Assets.getBitmapData("img/stuff/camp/floor.png"));
    camp.set("tent1", Assets.getBitmapData("img/stuff/camp/tent1.png"));
    camp.set("tent2", Assets.getBitmapData("img/stuff/camp/tent2.png"));
    camp.set("tent3", Assets.getBitmapData("img/stuff/camp/tent3.png"));
    camp.set("tent4", Assets.getBitmapData("img/stuff/camp/tent4.png"));
    camp.set("fence", Assets.getBitmapData("img/stuff/camp/fence.png"));
  }
  private static function loadMiscs() {
    miscs = new Map<String, BitmapData>();
    miscs.set("baloon", Assets.getBitmapData("img/misc/baloon.png"));
    miscs.set("thinking", Assets.getBitmapData("img/misc/thinking.png"));
    miscs.set("space", Assets.getBitmapData("img/misc/space.png"));
  }
  private static function loadUis() {
    uis = new Map<String, BitmapData>();
    uis.set("map", Assets.getBitmapData("img/ui/map.png"));
    uis.set("days", Assets.getBitmapData("img/ui/days.png"));
    tools = new Map<String, BitmapData>();
    tools.set("axe", Assets.getBitmapData("img/ui/tools/axe.png"));
    tools.set("knife", Assets.getBitmapData("img/ui/tools/knife.png"));
    tools.set("pick", Assets.getBitmapData("img/ui/tools/pick.png"));
    tools.set("rod", Assets.getBitmapData("img/ui/tools/rod.png"));
    tools.set("spear", Assets.getBitmapData("img/ui/tools/axe.png"));
    tools.set("hand", Assets.getBitmapData("img/ui/tools/axe.png"));
    craft = new Map<String, BitmapData>();
    craft.set("title", Assets.getBitmapData("img/craft/title.png"));
    craft.set("fire", Assets.getBitmapData("img/craft/icons/fire.png"));
    craft.set("rod", Assets.getBitmapData("img/craft/icons/fishing.png"));
    craft.set("plank", Assets.getBitmapData("img/craft/icons/plank.png"));
    craft.set("raft", Assets.getBitmapData("img/craft/icons/raft.png"));
    craft.set("rope", Assets.getBitmapData("img/craft/icons/rope.png"));
    craft.set("sail", Assets.getBitmapData("img/craft/icons/sail.png"));
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
