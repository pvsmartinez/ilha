package ;

import openfl.display.Sprite;
import openfl.Lib;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;

class Controller extends Sprite
{

  private var keys:Array<Bool> = [];

	public function new() {
    super();
    Lib.current.stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
    Lib.current.stage.addEventListener(KeyboardEvent.KEY_UP, onKeyUp);
	}

  public function interact(target:Body, stuff:Array<Component>) {
    target.interact([keys[Keyboard.SPACE], keys[Keyboard.TAB]],stuff);
  }

  public function move(target:Body):Void {
    target.move(keys[Keyboard.LEFT], keys[Keyboard.UP], keys[Keyboard.RIGHT], keys[Keyboard.DOWN]);
  }

  private function onKeyDown(evt:KeyboardEvent):Void {
    keys[evt.keyCode] = true;
  }

  private function onKeyUp(evt:KeyboardEvent):Void {
    keys[evt.keyCode] = false;
  }

}
