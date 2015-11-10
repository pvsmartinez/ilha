package core;

import openfl.display.Sprite;
import openfl.ui.Keyboard;

import core.Game;
import core.Human;
import core.KeyState;

class Player extends Sprite {

  private var _puppet:Human;
  private var _actionKeys:Array<Bool>;
  private var _movementKeys:Array<Bool>;

  public function new(human:Human) {
    super();
    _puppet = human;
  }

  public function everyFrame(deltaTime:Float) {
    _actionKeys = [KeyState.isKeyDown(Keyboard.SPACE, true), KeyState.isKeyDown(Keyboard.C, true)];
    _movementKeys = [
      KeyState.isKeyDown(Keyboard.LEFT),
      KeyState.isKeyDown(Keyboard.UP),
      KeyState.isKeyDown(Keyboard.RIGHT),
      KeyState.isKeyDown(Keyboard.DOWN)
    ];
    _puppet.everyFrame(deltaTime, _actionKeys, _movementKeys);
  }

}
