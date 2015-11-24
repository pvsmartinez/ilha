package core;

import core.Stuff;
import core.SoundHandler;

import openfl.display.Sprite;

enum ToolKind {
  axe;
  pick;
  spear;
  rod;
  knife;
  hand;
}

class Tool extends Sprite {

  public var kind:ToolKind;

  public function new(kd:ToolKind) {
    super();
    kind = kd;
  }

  public function howManyHitPointsWouldGetFromResource(stf:Stuff):Float{
    var returnValue:Float = 1;
    var list = [tree, bush, grass, rock, wave];
    var values:Array<Float>;
    switch(kind){
        case axe:
          values = [10, 2, 4, 2, 2];
        case pick:
          values = [4, 2, 2, 10, 1];
        case spear:
          values = [1, 2, 5, 2, 5];
        case rod:
          values = [1, 3, 1, 1, 10];
        case knife:
          values = [2, 6, 10, 2, 2];
        case hand:
          values = [2, 2, 2, 2, 2];
        default:
          values = [2, 2, 2, 2, 2];
    }
    for (i in 0...list.length) {
      if (list[i] == stf.kind) {
        returnValue = values[i];
        break;
      }
    }

    materialSound(stf);

    return returnValue;
  }

  public function materialSound(stf:Stuff):Void{
    switch(stf.kind){
      case tree:
        if(kind == rod){
          SoundHandler.randomSoundFromList(["melee+beat0", "melee+beat1", "melee+beat2"],[33, 33, 34]);
        }
        else if(kind == hand){
          SoundHandler.randomSoundFromList(["punch0", "punch1", "punch2", "punch3", "punch4", "punch5"], [5, 25, 5, 25, 25, 15]);
        }
        else{
          SoundHandler.randomSoundFromList(["axe0", "axe1", "axe2"],[33, 33, 34]);
        }
      case bush:
        if(kind == knife){
          SoundHandler.randomSoundFromList(["melee0", "melee1", "melee2"],[33, 33, 34]);
        }
        SoundHandler.randomSoundFromList(["leaves0", "leaves1", "leaves2"], [33, 33, 34]);
      case grass:
        if(kind == knife){
          SoundHandler.randomSoundFromList(["melee0", "melee1", "melee2"],[33, 33, 34]);
        }
        SoundHandler.randomSoundFromList(["leaves0", "leaves1", "leaves2"], [33, 33, 34]);
      case rock:
        if(kind == rod){
          SoundHandler.randomSoundFromList(["punch0", "punch1", "punch2", "punch3", "punch4", "punch5"], [5, 25, 5, 25, 25, 15]);
        }
        else if(kind == hand){
          SoundHandler.randomSoundFromList(["punch0", "punch1", "punch2", "punch3", "punch4", "punch5"], [5, 25, 5, 25, 25, 15]);
        }
        else{
          SoundHandler.randomSoundFromList(["pick0", "pick1", "pick2"], [33, 33, 34]);
        }
      case wave:
        SoundHandler.randomSoundFromList(["water0", "water1", "water2"], [33, 33, 34]);
      default:
    }
  }
}



