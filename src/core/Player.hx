package core;

import openfl.display.Sprite;
import openfl.ui.Keyboard;

import core.Game;
import core.Human;
import core.KeyState;

class Player extends Sprite {

  private var _puppet:Human;
  private var _actionKeys:Array<Bool>;
  private var _movementKeys:Array<Int>;

  public function new(human:Human) {
    super();
    _puppet = human;
  }

  public function everyFrame(deltaTime:Float) {
    _actionKeys = [KeyState.isKeyDown(Keyboard.SPACE, true), KeyState.isKeyDown(Keyboard.C, true)];
    _movementKeys = [0,0];
    var dir:Int = null;
    if (KeyState.isKeyDown(Keyboard.LEFT)) {
      dir = 0;
      _movementKeys[0] --;
    }
    if (KeyState.isKeyDown(Keyboard.UP)) {
      dir = 1;
      _movementKeys[1] --;
    }
    if (KeyState.isKeyDown(Keyboard.RIGHT)) {
      dir = 2;
      _movementKeys[0] ++;
    }
    if (KeyState.isKeyDown(Keyboard.DOWN)) {
      dir = -1;
      _movementKeys[1] ++;
    }
    if (KeyState.lastKey == Keyboard.LEFT && KeyState.isKeyDown(Keyboard.LEFT))
      dir = 0;
    if (KeyState.lastKey == Keyboard.UP && KeyState.isKeyDown(Keyboard.UP))
      dir = 1;
    if (KeyState.lastKey == Keyboard.RIGHT && KeyState.isKeyDown(Keyboard.RIGHT))
      dir = 2;
    if (KeyState.lastKey == Keyboard.DOWN && KeyState.isKeyDown(Keyboard.DOWN))
      dir = -1;
    var target:Body = _puppet.getFocus();
    if (target != null) {
      target.onFocus = true;
    }
    _puppet.setDirection(dir);
    _puppet.everyFrame(deltaTime, _actionKeys, _movementKeys);
  }

}
