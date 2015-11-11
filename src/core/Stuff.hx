package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

import core.Progress;
import core.Material;
import core.Human;
import core.Body;
import core.Rs;

enum SourceKind {
  tree;
  bush;
  rock;
  wave;
}

enum SourceState {
  idle;
  recovering;
  gone;
}

class Stuff extends Body {

  public var kind:SourceKind;
  private var _material:MaterialKind;
  private var _hitPoints:Float;
  private var _timer:Float;
  private var _timeToRecover:Float;
  private var _timeToExtract:Float;
  private var _progress:Progress;
  private var _agent:Human;
  private var _materialIcon:Material;

  public var state:SourceState = idle;
  public var targeted:Bool = false;

  public function new(kd:SourceKind) {

    _hitPoints = 100.0;

    kind = kd;
    var imgData:BitmapData;
    var reposition = false;
    switch ( kd ) {
      case tree:
        _material = wood;
        _timeToRecover = 30 * 1000;
        _timeToExtract = 2 * 1000;
      case bush:
        _material = leaf;
        _timeToRecover = 60 * 1000;
        _timeToExtract = 1 * 1000;
      case rock:
        _material = stone;
        _timeToRecover = null;
        _timeToExtract = 5 * 1000;
      case wave:
        _material = fish;
        _timeToRecover = 120 * 1000;
        _timeToExtract = 2 * 1000;
        reposition = true;
    }
    super(Rs.stuffs[Std.string(kind)], false);
    if (reposition) {
      _bitMap.x = _bitMap.y = 0;
    }
    _materialIcon = new Material(_material);
    _materialIcon.x = -_materialIcon.sizeX/2;
    _materialIcon.y = 0;
    _progress = new Progress(this);
  }

  public function extract(agent:Human):Bool {
    if (state == idle) {
      addChild(_progress);
      _agent = agent;

      _hitPoints -= _agent.useTool(this);

      _progress.draw((100.0 - _hitPoints)/100.0);


      if(_hitPoints <= 0.0){
        if (_timeToRecover != null) {
          state = recovering;
          _timer = _timeToRecover;
        } else {
          state = gone;
        }

        _agent.createMaterial(_material);
        removeChild(_bitMap);
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
      case recovering:
        removeChild(_materialIcon);
        _timer -= deltaTime;
        if (_timer < 0) {
          _hitPoints = 100.0;
          state = idle;
          addChild(_bitMap);
          targeted = false;
        }
      case gone:
        removeChild(_materialIcon);
    }
  }

}
