package ;

import openfl.display.Sprite;
import openfl.events.Event;

class Main extends Sprite {

  private var game:Game;
	private var ctrl:Controller;

  public function new() {
    super();
    ctrl = new Controller();
    game = new Game();
    this.addChild(game);
    ctrl.setGame(game);
		this.addEventListener(Event.ENTER_FRAME, everyFrame);
  }

  private function everyFrame(evt:Event):Void {
    ctrl.everyFrame();
    game.everyFrame();
  }

}
