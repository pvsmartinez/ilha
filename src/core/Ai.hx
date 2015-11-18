package core;

import openfl.display.Sprite;
import openfl.geom.Point;

import core.RecipeBook;
import core.Constants;
import core.Material;
import core.Stuff;
import core.Human;
import core.Story;
import core.Camp;

enum AiStates {
  thinking;
  going;
  talking;
  doing;
}

enum AiGoal {
  craft;
  collect;
  neutral;
  desperate;
}

enum AiKinds {
  thinker;
  emotional;
  accelerated;
  focused;
  leader;
  calm;
  depressed;
}

enum DesperatePossibilities {
  player;
  random;
}

class Ai extends Sprite {

  // mind vars
  private var _kind:AiKinds;
  private var _mind:AiStates = thinking;
  private var _goal:AiGoal = null;
  private var _goalSpecific:EnumValue;
  // mind stats vars
  private var _timeNeedToThink:Float;
  private var _timeRandomWalking:Float;
  private var _smartDecisionRatio:Float;
  private var _eficienceFactor:Float;

  // controll vars
  private var _puppet:Human;
  private var _actionKeys:Array<Bool>;
  private var _movementKeys:Array<Int>;
  private var _movementKeysAux:Array<Int>;
  private var _dir:Int;
  private var _lastGoal:AiGoal = null;

  //auxiliar vars
  private var _timerA:Float = 0;
  private var _timerB:Float = 0;
  private var _target:Dynamic;
  private var _aux:Map<MaterialKind,Int>;

  public function new(human:Human) {
    super();
    _puppet = human;
    _puppet.speed /= 2;
    var kinds:Array<AiKinds> = [thinker,emotional,accelerated,focused,leader,calm,depressed];
    var rnd = Math.floor(Math.random() * kinds.length);
    _kind = kinds[rnd];
    var stats:Array<Float> = [1, 1, 1, 1];
    switch ( _kind ) {
      case thinker:
        stats = [1, 1, 1, 1];
      case emotional:
        stats = [1, 1, 1, 1];
      case accelerated:
        stats = [1, 1, 1, 1];
      case focused:
        stats = [1, 1, 1, 1];
      case leader:
        stats = [1, 1, 1, 1];
      case calm:
        stats = [1, 1, 1, 1];
      case depressed:
        stats = [1, 1, 1, 1];
    }
    _timeNeedToThink = stats[0] * 20 * 1000;
    _timeRandomWalking = stats[1] * 5 * 1000;
    _smartDecisionRatio = stats[2] / 2;
    _eficienceFactor = stats[3] / 2;
  }

  public function everyFrame(deltaTime:Float) {
    _actionKeys = [false, false];
    _movementKeys = [0, 0];
    switch ( _mind ) {
      case thinking:
        think(deltaTime);
      case going:
        go();
      case doing:
        doAction();
      case talking:
    }
    _puppet.setDirection(_dir);
    _puppet.everyFrame(deltaTime, _actionKeys, _movementKeys);
    //trace(_mind, _goal, _goalSpecific, _target, _actionKeys, _movementKeys);
  }

  private function think(deltaTime:Float) {
    _timerA += deltaTime;
    if (_timerA > _timeNeedToThink) {
      decide();
    } else {
      randomWalk(deltaTime);
    }
  }

  private function decide() {
    var nextGoal:Array<AiGoal>;
    switch ( _kind ) {
      case thinker:
        nextGoal = [craft, craft, collect];
      case emotional:
        nextGoal = [collect, neutral, neutral];
        //if (Story.totalDays - Story.day == 1) {
        //  nextGoal.push(desperate);
        //  nextGoal.push(desperate);
        //}
      case accelerated:
        nextGoal = [collect, collect, neutral];
      case focused:
        nextGoal = [craft, craft, craft];
      case leader:
        nextGoal = [collect, collect, craft];
      case calm:
        nextGoal = [collect, collect, neutral];
      case depressed:
        nextGoal = [neutral, neutral, neutral];
        //if (Story.totalDays - Story.day == 1) {
        //  nextGoal.push(desperate);
        //}
    }
    var tries:Int = 0;
    while(tries < 2) {
      var rnd = Math.floor(Math.random() * nextGoal.length);
      _goal = nextGoal[rnd];
      if (nextGoal[rnd] != _lastGoal) {
        tries = 2;
      } else {
        tries ++;
      }
    }
    switch ( _goal ) {
      case craft:
        var objs = [rope, sail, plank];
        var rnd = Math.floor(Math.random() * objs.length);
        _goalSpecific = objs[rnd];
        _aux = RecipeBook.getRecipeFor(_goalSpecific)._ingredientList;
      case collect:
        var objs = [wood, stone, leaf, fruit, fish];
        var rnd = Math.floor(Math.random() * objs.length);
        _goalSpecific = objs[rnd];
      case neutral:
        var objs = [wood, stone, leaf, fruit, fish];
        var rnd = Math.floor(Math.random() * objs.length);
        _goalSpecific = objs[rnd];
      case desperate:
        var objs = [wood, stone, leaf, fruit, fish];
        //var objs = [player, random];
        var rnd = Math.floor(Math.random() * objs.length);
        _goalSpecific = objs[rnd];
    }
    getTarget();
  }

  private function getTarget() {
    switch ( _goalSpecific ) {
      case rope, sail, plank:
        var targ:MaterialKind = null;
        for (mat in _aux.keys()) {
          var x = _aux[mat];
          for (m in _puppet._materials) {
            if (m._kind == mat)
              x --;
          }
          if (x > 0) {
            targ = mat;
            break;
          }
        }
        if (targ != null) {
          defineStuff(targ);
        } else {
          _target = null;
          _mind = doing;
        }
      case wood, stone, leaf, fruit, fish:
       var collectStuff = true;
        switch ( _goal ) {
          case collect:
            if (_puppet._materials.length >= Constants.HUMAN_MATERIALS_CARRY)
              collectStuff = false;
          case normal:
            var rnd = Math.floor(Math.random() * Constants.HUMAN_MATERIALS_CARRY);
            if (_puppet._materials.length > rnd)
              collectStuff = false;
        }
        if (collectStuff)
          defineStuff(cast(_goalSpecific, MaterialKind));
        else
          _target = _puppet.floor._camp;
          _mind = going;
    }
  }
  private function defineStuff(mt:MaterialKind) {
    var dumb:Bool = true;
    if (doneASmartDecision())
      dumb = false;
    var st:Stuff = null;
    var dist:Float = 10000;
    for (obj in _puppet.floor.objs) {
      if (Type.getClass(obj) == Stuff) {
        var ob = cast(obj, Stuff);
        if (ob._material == mt && ob.state == idle && !ob.targeted) {
          if (dumb || st == null)
            st = ob;
          else if (st != null) {
            var dx = ob.x - _puppet.x;
            var dy = ob.y - _puppet.y;
            var dt = Math.sqrt((dx*dx)+(dy*dy));
            if (dt < dist) {
              dist = dt;
              st = ob;
            }
          }
        }
      }
    }
    _target = st;
    _mind = going;
  }

  private function randomWalk(deltaTime:Float) {
    if (_timerB <= 0) {
      _timerB = _timeRandomWalking;
      var xDir = Math.floor(Math.random() * 3) - 1;
      var yDir = Math.floor(Math.random() * 3) - 1;
      _movementKeysAux = [xDir, yDir];
      if (xDir != 0)
        _dir = xDir + 1;
      if (yDir != 0)
        _dir = -yDir;
    } else {
      _movementKeys = _movementKeysAux;
      _timerB -= deltaTime;
    }
  }

  private function go() {
    if (_target == null) {
      nextAction();
      return;
    }
    if (Type.getClass(_target) == Stuff && _target.state != idle) {
      if (doneASmartDecision()) {
        defineStuff(_target._material);
      } else {
        nextAction();
      }
      return;
    }
    var xx;
    var yy;
    if (Type.getClass(_target) == Stuff) {
      xx = cast(_target, Sprite).x;
      yy = cast(_target, Sprite).y;
    } else {
      xx = cast(_target, Camp).x + cast(_target, Camp).sizeX/2;
      yy = cast(_target, Camp).y + cast(_target, Camp).sizeY/2;
    }
    var dx = _puppet.x - xx;
    var dy = _puppet.y - yy;
    _movementKeys[0] = (dx != 0 && Math.abs(dx) > _puppet.speed) ? -Math.floor(dx/Math.abs(dx)) : 0;
    _movementKeys[1] = (dy != 0 && Math.abs(dy) > _puppet.speed) ? -Math.floor(dy/Math.abs(dy)) : 0;
    if (Math.abs(dx) > Math.abs(dy))
      _dir = -Math.floor(dx/Math.abs(dx)) + 1;
    if (Math.abs(dx) < Math.abs(dy))
      _dir = Math.floor(dy/Math.abs(dy));

    if (Type.getClass(_target) == Stuff) {
      var tg:Body = _puppet.getFocus();
      if (tg != null && tg == _target)
        _mind = doing;
    } else if (Type.getClass(_target) == Camp) {
      if (_puppet.x > cast(_target, Camp).x + 10 && _puppet.x < cast(_target, Camp).x + cast(_target, Camp).sizeX - 10 &&
          _puppet.y > cast(_target, Camp).y + 10 && _puppet.y < cast(_target, Camp).y + cast(_target, Camp).sizeY - 10)
        _mind = doing;
    }
  }

  private function doAction() {
    switch ( Type.getClass(_target) ) {
      case Stuff:
        _actionKeys[0] = true;
        if (_target.state != idle) {
          nextAction();
        }
      case Camp:
        _puppet.releaseMaterial(false);
        if (_puppet._materials.length == 0) {
          nextAction();
        }
      case null:
        _puppet.craftGoal = _goalSpecific;
        _actionKeys[1] = true;
        if(Lambda.exists(_puppet._materials, function (ii){return ii._kind == _goalSpecific;})) {
          nextAction();
        }
    }
  }

  private function nextAction() {
    switch ( Type.getClass(_target) ) {
      case Stuff:
        getTarget();
      case Camp:
        _timerA = 0;
        _mind = thinking;
        _goal = null;
        _goalSpecific = null;
        _aux = null;
        _target = null;
      case null:
        _target = _puppet.floor._camp;
        _mind = going;
    }
  }

  private function doneASmartDecision():Bool {
    return _smartDecisionRatio > Math.random();
  }

}
