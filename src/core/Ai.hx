package core;

import openfl.display.Sprite;
import openfl.geom.Point;

import core.Stuff;
import core.Human;
import core.TileMap;

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
  private var _targetPos:Point;
  private var _path:Array<Point>;
  private var _randomWalk:Array<Bool>;
  private var _timeRandomWalking:Float = 0;

  public function new(human:Human) {
    super();
    _puppet = human;
    _puppet.speed /= 2;
    _timeNeedToThink = Math.max(Math.floor(Math.random() * 30 * 1000), 5 * 1000);
  }

  public function everyFrame(maps:Array<TileMap>, deltaTime:Float) {
    _actionKeys = [false];
    _movementKeys = [false, false, false, false];
    switch ( _mind ) {
      case thinking:
        think(maps, deltaTime);
      case going:
        go(maps, deltaTime);
      case talking:
    }
    _puppet.everyFrame(maps, deltaTime, _actionKeys, _movementKeys);
  }

  private function think(maps:Array<TileMap>, deltaTime:Float) {
    _timeThinking += deltaTime;
    if (_timeThinking > _timeNeedToThink) {
      var rnd = Math.floor(Math.random() * maps[1].nObjs);
      var i = 0;
      for (key in maps[1].objs.keys()) {
        if (i == rnd) {
          _target = cast(maps[1].objs[key], Stuff);
          var pos = key.split("/");
          _targetPos = new Point(Std.parseInt(pos[0]), Std.parseInt(pos[1]));
        }
        i ++;
      }
      trace(_target, _targetPos);
      _timeThinking = 0;
      _mind = going;
    } else {
      if (_timeRandomWalking <= 0) {
        _timeRandomWalking = Math.random() * deltaTime * 30;
        var xDir = Math.floor(Math.random() * 3);
        var yDir = Math.floor(Math.random() * 3);
        _randomWalk = [xDir == 1, yDir == 1, xDir == 2, yDir == 2];
      } else {
        _movementKeys = _randomWalk;
        _timeRandomWalking -= deltaTime;
      }
    }
  }

  private function go(maps:Array<TileMap>, deltaTime:Float) {
    _puppet.getPos(maps[0]);
    if(_puppet.tileX > _targetPos.x)
      _movementKeys[0] = true;
    if(_puppet.tileY > _targetPos.y)
      _movementKeys[1] = true;
    if(_puppet.tileX < _targetPos.x)
      _movementKeys[2] = true;
    if(_puppet.tileY < _targetPos.y)
      _movementKeys[3] = true;
    var focusPoint:Point = _puppet.focus(maps[1], _movementKeys);
    if(focusPoint.x == _targetPos.x && focusPoint.y == _targetPos.y) {
      _actionKeys = [true];
      _target = null;
      _targetPos = null;
      _mind = thinking;
    }
  }

}
