package core;

import openfl.display.Sprite;
import openfl.display.Bitmap;

import core.TileSystem;
import core.Material;
import core.Rs;

class Camp extends Sprite {

  private var _camp:Bitmap;

  public var tent:Body;
  public var sizeX:Float;
  public var sizeY:Float;
  public var materials:Array<Material> = [];

  public function new() {
    super();
    _camp = new Bitmap(Rs.stuffs["camp"]);
    sizeX = _camp.width;
    sizeY = _camp.height;
    addChild(_camp);
    tent = new Body(Rs.stuffs["tent"], false);
  }
  public function createTent(map:TileSystem) {
    tent.x = this.x;
    tent.y = this.y + sizeY/2 + tent.sizeY/2;
    map.addChild(tent);
    map.objs.push(tent);
  }
  public function addMaterial(mt:Material) {
    materials.push(mt);
  }

}
