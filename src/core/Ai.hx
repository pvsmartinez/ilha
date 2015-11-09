package core;

import openfl.display.Sprite;
import openfl.geom.Point;

import core.Stuff;
import core.Human;

enum AiStates {
  thinking;
  going;
  talking;
}

class Ai extends Sprite {

  private var _puppet:Human;
  private var _actionKeys:Array<Bool>;
  private var _movementKeys:Array<Bool>;
  private var _mind:AiStates = thinking;
  private var _timeThinking:Float = 0;
  private var _timeNeedToThink:Float;
  private var _target:Stuff;
  private var _path:Array<Point>;
  private var _randomWalk:Array<Bool>;
  private var _timeRandomWalking:Float = 0;

  public function new(human:Human) {
    super();
    _puppet = human;
    _puppet.speed /= 2;
    _timeNeedToThink = Math.max(Math.floor(Math.random() * 30 * 1000), 5 * 1000);
  }

  public function everyFrame(deltaTime:Float) {
    _actionKeys = [false];
    _movementKeys = [false, false, false, false];
    switch ( _mind ) {
      case thinking:
        think(deltaTime);
      case going:
        go();
      case talking:
    }
    _puppet.everyFrame(deltaTime, _actionKeys, _movementKeys);
  }

  private function think(deltaTime:Float) {
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
        var xDir = Math.floor(Math.random() * 3);
        var yDir = Math.floor(Math.random() * 3);
        _randomWalk = [xDir == 1, yDir == 1, xDir == 2, yDir == 2];
      } else {
        _movementKeys = _randomWalk;
        _timeRandomWalking -= deltaTime;
      }
    }
  }

  private function go() {
    if (_target != null && _target.respaw == -1) {
      if(_puppet.x > _target.x + _puppet.speed)
        _movementKeys[0] = true;
      if(_puppet.x > _target.y + _puppet.speed)
        _movementKeys[1] = true;
      if(_puppet.x < _target.x - _puppet.speed)
        _movementKeys[2] = true;
      if(_puppet.x < _target.y - _puppet.speed)
        _movementKeys[3] = true;
      var target:Body = _puppet.getFocus();
      if (target != null && target == _target) {
        _actionKeys = [true];
      }
    } else {
      _target = null;
      _mind = thinking;
    }
  }
}
