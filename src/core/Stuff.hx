package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

import core.SoundHandler;
import core.Progress;
import core.Material;
import core.Human;
import core.Body;
import core.Rs;

enum SourceKind {
  tree;
  bush;
  grass;
  rock;
  wave;
}

enum SourceState {
  idle;
  recovering;
  gone;
}

class Stuff extends Body {

  private var _hitPointsMax:Float;
  private var _hitPoints:Float;
  private var _timer:Float;
  private var _timeToRecover:Float;
  private var _progress:Progress;
  private var _agent:Human;
  private var _materialIcon:Material;

  public var _material:MaterialKind;
  public var kind:SourceKind;
  public var state:SourceState = idle;
  public var targeted:Bool = false;

  public function new(kd:SourceKind) {


    kind = kd;
    var imgData:BitmapData;
    var animate = [];
    switch ( kd ) {
      case tree:
        _material = wood;
        _hitPointsMax = 20.0;
        _timeToRecover = 30 * 1000;
      case bush:
        _material = fruit;
        _hitPointsMax = 6.0;
        _timeToRecover = 60 * 1000;
      case grass:
        _material = leaf;
        _hitPointsMax = 10.0;
        _timeToRecover = 60 * 1000;
      case rock:
        _material = stone;
        _hitPointsMax = 30.0;
        _timeToRecover = null;
      case wave:
        _material = fish;
        _hitPointsMax = 10.0;
        _timeToRecover = 120 * 1000;
        animate = [1, 129,81];
    }
    _hitPoints = _hitPointsMax;
    if (animate.length>0) {
      super(Rs.stuffs[Std.string(kind)], true, animate[0], animate[1], animate[2]);
      _animation.go12321 = true;
    } else {
      super(Rs.stuffs[Std.string(kind)], false);
    }
    _materialIcon = new Material(_material);
    _materialIcon.x = -_materialIcon.sizeX/2;
    _materialIcon.y = 0;
    _progress = new Progress(this);
  }

  public function extract(agent:Human):Bool {
    if (state == idle) {
      addChild(_progress);
      SoundHandler.randomSoundFromList(["axe0", "axe1", "axe2"],[33, 33, 34]);
      _agent = agent;
      _hitPoints -= _agent.useTool(this);
      _progress.draw((_hitPointsMax - _hitPoints)/_hitPointsMax);
      if(_hitPoints <= 0.0){
        if (_timeToRecover != null) {
          state = recovering;
          _timer = _timeToRecover;
        } else {
          state = gone;
        }
        _agent.createMaterial(_material);
        removeChild(_bitMap);
        if (_animation != null)
          removeChild(_animation.displayImage);
        removeChild(_progress);
      }
      return true;
    }
    return false;
  }

  public function everyFrame(deltaTime:Float) {
    switch ( state ) {
      case idle:
        if (onFocus) {
          addChild(_materialIcon);
        } else {
          removeChild(_materialIcon);
        }
        if (_animation != null) {
          _animation.animate(deltaTime, true, 0);
        }
      case recovering:
        removeChild(_materialIcon);
        _timer -= deltaTime;
        if (_timer < 0) {
          _hitPoints = _hitPointsMax;
          state = idle;
          addChild(_bitMap);
          if (_animation != null)
            removeChild(_animation.displayImage);
          targeted = false;
        }
      case gone:
        removeChild(_materialIcon);
    }
  }

}
