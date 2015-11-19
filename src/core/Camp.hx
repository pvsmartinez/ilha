package core;

import openfl.display.Sprite;
import openfl.display.Bitmap;

import core.TileSystem;
import core.Material;
import core.Rs;

class Camp extends Sprite {

  private var _floor:Bitmap;

  public var tents:Array<Body>;
  public var sizeX:Float;
  public var sizeY:Float;
  public var materials:Array<Material> = [];

  public function new() {
    super();
    _floor = new Bitmap(Rs.camp["floor"]);
    sizeX = _floor.width;
    sizeY = _floor.height;
    addChild(_floor);
  }
  public function createTents(map:TileSystem) {
    tents = [];
    for (key in Rs.camp.keys()) {
       if (key != "floor") {
        var tent = new Body(Rs.camp[key], false);
        map.addChild(tent);
        map.objs.push(tent);
        switch ( key ) {
          case "tent1":
            tent.x = this.x + sizeX - tent.sizeX/2;
            tent.y = this.y + sizeY + 16;
          case "tent2":
            tent.x = this.x - tent.sizeX/2 + 16;
            tent.y = this.y + sizeY/2 + tent.sizeY/2;
          case "tent3":
            tent.x = this.x + sizeX - tent.sizeX/2 - 16;
            tent.y = this.y - 16;
          case "tent4":
            tent.x = this.x + tent.sizeX/2;
            tent.y = this.y;
          case "fence":
            tent.x = this.x + tent.sizeX;
            tent.y = this.y - 32;
        }
        tents.push(tent);
       }
    }
  }
  public function addMaterial(mt:Material) {
    materials.push(mt);
  }

}
