package core;

import openfl.display.Sprite;
import openfl.ui.Keyboard;

import core.Human;
import core.TileMap;
import core.KeyState;

class Player extends Sprite {

  private var _puppet:Human;
  private var _actionKeys:Array<Bool>;
  private var _movementKeys:Array<Bool>;

  public function new(human:Human) {
    super();
    _puppet = human;
  }

  public function everyFrame(maps:Array<TileMap>, deltaTime:Float) {
    _actionKeys = [KeyState.isKeyDown(Keyboard.SPACE, true)];
    _movementKeys = [
      KeyState.isKeyDown(Keyboard.LEFT),
      KeyState.isKeyDown(Keyboard.UP),
      KeyState.isKeyDown(Keyboard.RIGHT),
      KeyState.isKeyDown(Keyboard.DOWN)
    ];
    _puppet.everyFrame(maps, deltaTime, _actionKeys, _movementKeys);
  }

}
