package core;

import openfl.display.Sprite;
import openfl.Lib;

import Main.MainState;
import core.Constants;

class Story extends Sprite {

  private var _coolTime:Int;
  private var _endGameTime:Int;
  private var _dayTime:Float;

  public static var day:Int = 1;
  public static var totalDays:Int = 12;

  public function new() {
    super();
    _coolTime = Math.floor(Constants.GAME_TIME / 5);
    _endGameTime = Constants.GAME_TIME;
    _dayTime = _endGameTime/totalDays;
    temporaryEffect();
  }

  private function temporaryEffect() {
    this.graphics.beginFill(0xff8844, 1);
		this.graphics.drawRect(0, 0, Lib.current.stage.stageWidth, Lib.current.stage.stageHeight);
		this.graphics.endFill();
  }

  public function everyFrame(timeStarted:Int) {
    day = Math.ceil(timeStarted/_dayTime);
    this.alpha = day/(totalDays + 1);
    if (timeStarted >= _endGameTime)
      Main.setGameState(gameOver);
  }
}
