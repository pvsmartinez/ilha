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
  private var _movementKeys:Array<Int>;
  private var _mind:AiStates = thinking;
  private var _timeThinking:Float = 0;
  private var _timeNeedToThink:Float;
  private var _target:Stuff;
  private var _path:Array<Point>;
  private var _randomWalk:Array<Int>;
  private var _timeRandomWalking:Float = 0;
  private var _dir:Int;

  public function new(human:Human) {
    super();
    _puppet = human;
    _puppet.speed /= 2;
    _timeNeedToThink = Math.max(Math.floor(Math.random() * 30 * 1000), 5 * 1000);
  }

  public function everyFrame(deltaTime:Float) {
    _actionKeys = [false];
    _movementKeys = [0, 0];
    switch ( _mind ) {
      case thinking:
        think(deltaTime);
      case going:
        go();
      case talking:
    }
    _puppet.everyFrame(deltaTime, _actionKeys, _movementKeys, _dir);
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
  }
}
