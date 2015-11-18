package core;

import openfl.display.Sprite;
import openfl.ui.Keyboard;

import core.Game;
import core.Human;
import core.KeyState;

enum PlayerState {
  normal;
  craftMenu;
}

class Player extends Sprite {

  private var _puppet:Human;
  private var _state:PlayerState = normal;
  private var _actionKeys:Array<Bool>;
  private var _movementKeys:Array<Int>;

  public function new(human:Human) {
    super();
    _puppet = human;
  }

  public function everyFrame(deltaTime:Float) {
    _movementKeys = [0,0];
    _actionKeys = [false, false];
    switch ( _state ) {
      case normal:
        _actionKeys = [KeyState.isKeyDown(Keyboard.SPACE, true), false];
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
          if (Type.getClass(target) == Stuff) {
            _puppet.positionIcon("space");
          } else {
            _puppet.positionIcon("baloon");
          }
          target.onFocus = true;
        } else {
          _puppet.removeChild(_puppet._icon);
        }
        _puppet.setDirection(dir);
      case craftMenu:

    }
    _puppet.everyFrame(deltaTime, _actionKeys, _movementKeys);
  }

}
