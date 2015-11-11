package core;

import core.Stuff;

import openfl.display.Sprite;

enum ToolKind {
  axe;
  pick;
  spear;
  rod;
  knife;
}

class Tool extends Sprite {

  private var kind:ToolKind;

  public function new(kd:ToolKind) {
    super();

    kind = kd;

  }

  public function howManyHitPointsWouldGetFromResource(stf:Stuff):Float{

    var returnValue:Float;

    switch(kind){
        case axe:
        switch(stf.kind){
            case tree:
            returnValue = 50.0;
            case bush:
            returnValue = 30.0;
            default:
            returnValue = 1.0;
        }
        case pick:
        switch(stf.kind){
            case rock:
            returnValue = 50.0;
            default:
            returnValue = 1.0;
        }

        case spear:
        switch(stf.kind){
            case wave:
            returnValue = 50.0;
            default:
            returnValue = 1.0;
        }

        case rod:
        switch(stf.kind){
            case wave:
            returnValue = 50.0;
            default:
            returnValue = 1.0;
        }

        case knife:
        switch(stf.kind){
            case bush:
            returnValue = 50.0;
            default:
            returnValue = 1.0;
        }

    }
    return returnValue;
  }

}
