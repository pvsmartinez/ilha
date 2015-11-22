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
    var reposition = false;
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
        reposition = true;
    }
    _hitPoints = _hitPointsMax;
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
      _progress.draw((_hitPointsMax - _hitPoints)/_hitPointsMax);
      if(_hitPoints <= 0.0){
        if (_timeToRecover != null) {
          state = recovering;
          _timer = _timeToRecover;
        } else {
          state = gone;
        }
        _agent.createMaterial(_material);
        creationSound();
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
          _hitPoints = _hitPointsMax;
          state = idle;
          addChild(_bitMap);
          targeted = false;
        }
      case gone:
        removeChild(_materialIcon);
    }
  }

  public function creationSound(){
    switch ( _material ) {
      case wood:
        SoundHandler.randomSoundFromList(["wood0", "wood1", "wood2", "blip"] ,[33, 33, 33, 1]);
      case fruit:
        SoundHandler.randomSoundFromList(["cherry", "smash"] ,[90, 10]);
      case leaf:
        SoundHandler.playSound("leaves3");
      case stone:
        SoundHandler.playSound("rock");
      case fish:
        SoundHandler.playSound("water3");
      case water:
        SoundHandler.playSound("water3");
      default:
    }
  }

}
