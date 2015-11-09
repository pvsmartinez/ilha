package core;

import core.Body;
import core.Rs;
import core.SoundHandler;

enum MaterialKind {
  wood;
  stone;
  leaf;
  fruit;
  fish;
  water;
}

class Material extends Body {

  private var _kind:MaterialKind;

  public function new(matKind:MaterialKind) {
    _kind = matKind;
    var imgUrl:String;
    var pickedNumber:Int = Std.random(100);
    switch ( _kind ) {
      case wood:
        imgUrl = "wood";
        if(pickedNumber < 25){
            SoundHandler.playSound("axe0");
        }
        else if(pickedNumber < 45){
            SoundHandler.playSound("axe1");
        }
        else if(pickedNumber < 60){
            SoundHandler.playSound("axe2");
        }
        else if(pickedNumber < 75){
            SoundHandler.playSound("wood0");
        }
        else if(pickedNumber < 90){
            SoundHandler.playSound("wood1");
        }
        else if(pickedNumber < 97){
            SoundHandler.playSound("wood2");
        }
        else{
            SoundHandler.playSound("blip");
        }
      case fruit:
        imgUrl = "fruit";
        if(pickedNumber < 25){
            SoundHandler.playSound("axe0");
        }
        else if(pickedNumber < 45){
            SoundHandler.playSound("axe2");
        }
        else if(pickedNumber < 75){
            SoundHandler.playSound("wood2");
        }
        else if(pickedNumber < 90){
            SoundHandler.playSound("cherry");
        }
        else{
            SoundHandler.playSound("smash");
        }
      case stone:
        imgUrl = "stone";
        SoundHandler.playSound("smash");
      case fish:
        imgUrl = "fish";
        SoundHandler.playSound("smash");
      case water:
        imgUrl = "water";
        SoundHandler.playSound("smash");
      default:
        imgUrl = "fruit";
        SoundHandler.playSound("smash");
    }
    super(Rs.maters[imgUrl], false);
    this.selectable = false;
  }

  public function follow(target:Body, followDistance:Float) {
    var dx = this.x - target.x;
    var dy = this.y - target.y;
    var dist = Math.sqrt((dx*dx)+(dy*dy));
    if( dist > followDistance + 5 ) {
      var mv:Array<Bool> = [];
      var sp:Float = Math.floor((dist - followDistance) / 4);
      mv[0] = dx > 0;
      mv[1] = dy > 0;
      mv[2] = dx < 0;
      mv[3] = dy < 0;
      var sps = [sp * Math.abs(dx/dist), sp * Math.abs(dy/dist)];
      super.move(mv, sps);
    }
  }

}
