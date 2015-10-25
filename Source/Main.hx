package ;

import openfl.display.Sprite;
import openfl.utils.Timer;
import openfl.events.Event;
import openfl.events.TimerEvent;
import openfl.Lib;

enum GameState {
  mainMenu;
  playing;
  gameOver;
}

class Main extends Sprite {

  private var timer:Timer;
  private var state:GameState;

  private var menu:Menu;
  private var game:Game;
	private var ctrl:Controller;

  public function new() {
    super();

    state = mainMenu;
    timer = new Timer(1000);
		timer.addEventListener(TimerEvent.TIMER, everySecond);
		timer.start();
    setGameState("mainMenu");

    ctrl = new Controller();
		this.addEventListener(Event.ENTER_FRAME, everyFrame);
    Lib.current.stage.addEventListener("nextState", nextState);
  }

  private function nextState(e:Event) {
    switch ( state ) {
      case mainMenu:
        setGameState("playing");
      case playing:
        setGameState("gameOver");
      case gameOver:
        setGameState("mainMenu");
    }
  }

  public function setGameState(newState:String) {
    state = Type.createEnum(GameState, newState);
    switch ( state ) {
      case mainMenu:
        menu = new Menu();
        this.addChild(menu);
      case playing:
        this.removeChild(menu);
        menu = null;
        game = new Game();
        ctrl.setGame(game);
        this.addChild(game);
        state = playing;
      case gameOver:
        this.removeChild(game);
        game = null;
    }
  }

  private function everyFrame(evt:Event):Void {
    ctrl.everyFrame(Std.string(state));
    switch ( state ) {
      case mainMenu:
      case playing:
        game.everyFrame();
      case gameOver:
    }
  }

  private function everySecond(event:TimerEvent):Void {
    switch ( state ) {
      case mainMenu:
      case playing:
        game.everySecond();
      case gameOver:
    }

  }

}
