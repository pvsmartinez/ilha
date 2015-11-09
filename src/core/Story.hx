package core;

import openfl.display.Sprite;
import openfl.Lib;

import Main.MainState;
import core.Constants;

class Story extends Sprite {

  private var _coolTime:Int;
  private var _endGameTime:Int;

  public function new() {
    super();
    _coolTime = Math.floor(Constants.GAME_TIME / 5);
    _endGameTime = Constants.GAME_TIME;
    temporaryEffect();
  }

  private function temporaryEffect() {
    this.graphics.beginFill(0xff8844, 1);
		this.graphics.drawRect(0, 0, Lib.current.stage.stageWidth, Lib.current.stage.stageHeight);
		this.graphics.endFill();
  }

  public function everyFrame(timeStarted:Int) {
    this.alpha = Math.pow(Math.max((timeStarted - _coolTime),0)/_endGameTime, 2);
    if (timeStarted >= _endGameTime)
      Main.setGameState(gameOver);
  }
}
