package core;

import openfl.display.Sprite;
import openfl.geom.Point;

import core.Stuff;
import core.Human;
import core.Story;

enum AiStates {
  thinking;
  going;
  talking;
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

class Ai extends Sprite {

  // mind vars
  private var _kind:AiKinds;
  private var _mind:AiStates = thinking;
  private var _goal:AiGoal = null;
  private var _goalSpecific:Dynamic;
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
  private var _target:Body;

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
      case talking:
    }
    _puppet.setDirection(_dir);
    _puppet.everyFrame(deltaTime, _actionKeys, _movementKeys);
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
        if (Story.totalDays - Story.day == 1) {
          nextGoal.push(desperate);
          nextGoal.push(desperate);
        }
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
        if (Story.totalDays - Story.day == 1) {
          nextGoal.push(desperate);
        }
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

      case collect:

      case neutral:

      case desperate:

    }

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

  }

  /*private function think(deltaTime:Float) {
    _timeThinking += deltaTime;
    if (_timeThinking > _timeNeedToThink) {
      var tryes = 0;
      while (_target == null || tryes > 3) {
        tryes ++;
        var rnd = Math.floor(Math.random() * _puppet.floor.objs.length);
        var obj:Body = _puppet.floor.objs[rnd];
        if (Type.getClass(obj) != Stuff || cast(obj, Stuff).targeted)
          _target = null;
        else {
          _target = cast(obj, Stuff);
          _target.targeted = true;
        }
      }
      _timeThinking = 0;
      _mind = going;
    } else {
      if (_timeRandomWalking <= 0) {
        _timeRandomWalking = Math.random() * 5 * 1000;
        var xDir = Math.floor(Math.random() * 3) - 1;
        var yDir = Math.floor(Math.random() * 3) - 1;
        _randomWalk = [xDir, yDir];
        if (xDir != 0)
          _dir = xDir + 1;
        if (yDir != 0)
          _dir = -yDir;
      } else {
        _movementKeys = _randomWalk;
        _timeRandomWalking -= deltaTime;
      }
    }
  }

  private function go() {
    if (_target != null && _target.state == idle) {
      var dx = _puppet.x - _target.x;
      var dy = _puppet.y - _target.y;
      _movementKeys[0] = (dx != 0 && Math.abs(dx) > _puppet.speed) ? -Math.floor(dx/Math.abs(dx)) : 0;
      _movementKeys[1] = (dy != 0 && Math.abs(dy) > _puppet.speed) ? -Math.floor(dy/Math.abs(dy)) : 0;
      var target:Body = _puppet.getFocus();
      if (target != null && target == _target) {
        _actionKeys = [true];
      }
      if (Math.abs(dx) > Math.abs(dy))
        _dir = -Math.floor(dx/Math.abs(dx)) + 1;
      if (Math.abs(dx) < Math.abs(dy))
        _dir = Math.floor(dy/Math.abs(dy));
    } else {
      _target = null;
      _mind = thinking;
    }
  }*/
}
