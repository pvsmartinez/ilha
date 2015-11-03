package core;

import openfl.display.Sprite;
import openfl.utils.Timer;
import openfl.Lib;

import core.Island;
import core.Story;

class Game extends Sprite {

  private var _timeStarted:Int;
  private var _lastTime:Int;

  private var _island:Island;
  private var _story:Story;

  public function new() {
    super();

    _timeStarted = Lib.getTimer();
    _lastTime = 0;
    _island = new Island();
    _story = new Story();
    addChild(_island);
    _island.x = 0;
    _island.y = 0;
    addChild(_story);
  }

  public function everyFrame() {
    var elapsed = Lib.getTimer() - _timeStarted;
    var deltaTime = elapsed - _lastTime;
    _lastTime = elapsed;

    _story.everyFrame(_lastTime);
    _island.everyFrame(deltaTime);

  }

}
