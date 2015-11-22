package core;

import openfl.display.Sprite;
import openfl.ui.Keyboard;

import core.CraftMenu;
import core.KeyState;
import core.Human;
import core.Game;

enum PlayerState {
  normal;
  craftMenu;
}

class Player extends Sprite {

  private var _puppet:Human;
  private var _craftMenu:CraftMenu;

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
        if (KeyState.isKeyDown(Keyboard.CONTROL, true)) {
          _craftMenu = new CraftMenu(_puppet._materials);
          _state = craftMenu;
          _puppet.addChild(_craftMenu);
          _craftMenu.x = - _craftMenu.width/2;
          _craftMenu.y = - 5 - _puppet.sizeY - _craftMenu.height;
        } else {
          _puppet.removeChild(_craftMenu);
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
              if (cast(target, Stuff).state == idle)
                _puppet.positionIcon("space");
            } else if (Type.getClass(target) == Human) {
              _puppet.positionIcon("baloon");
            }
            target.onFocus = true;
          } else {
            _puppet.removeChild(_puppet._icon);
          }
          _puppet.setDirection(dir);
        }
      case craftMenu:
        if (KeyState.isKeyDown(Keyboard.CONTROL, true)) {
          _state = normal;
          _puppet.removeChild(_craftMenu);
          _craftMenu = null;
        } else {
          if (KeyState.isKeyDown(Keyboard.SPACE, true)) {
            var craft = _craftMenu.chooseBtn();
            if (craft != null) {
              _puppet.craft(craft);
              _state = normal;
              _puppet.removeChild(_craftMenu);
              _craftMenu = null;
            }
          } else {
            var d:Int = 0;
            if (KeyState.isKeyDown(Keyboard.UP, true)) {
              d = -1;
            }
            if (KeyState.isKeyDown(Keyboard.DOWN, true)) {
              d = 1;
            }
            _craftMenu.changeBtn(d);
          }
        }
      case isCrafting:
    }
    _puppet.everyFrame(deltaTime, _actionKeys, _movementKeys);
  }

}
