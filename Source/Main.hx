package ;

import openfl.display.Sprite;
import openfl.utils.Timer;
import openfl.events.Event;
import openfl.events.TimerEvent;

enum GameState {
  mainMenu;
  paused;
  startToPlay;
  playing;
  gameOver;
}

class Main extends Sprite {

  private var game:Game;
	private var ctrl:Controller;
  private var timer:Timer;
  private var state:GameState;

  public function new() {
    super();
    this.state = startToPlay;
		this.addEventListener(Event.ENTER_FRAME, everyFrame);
    this.timer = new Timer(1000);
		this.timer.addEventListener(TimerEvent.TIMER, everySecond);
		this.timer.start();
  }

  private function everyFrame(evt:Event):Void {
    switch ( state ) {
      case mainMenu:
      case paused:
      case startToPlay:
        ctrl = new Controller();
        game = new Game();
        ctrl.setGame(game);
        this.addChild(game);
        this.state = playing;
      case playing:
        ctrl.everyFrame();
        game.everyFrame();
      case gameOver:
    }
  }

  private function everySecond(event:TimerEvent):Void {
    switch ( state ) {
      case mainMenu:
      case paused:
      case startToPlay:
      case playing:
        game.everySecond();
      case gameOver:
    }

  }

}
