package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.geom.Rectangle;
import openfl.geom.Point;

class Animation extends Sprite {

  private var _spritesheet:BitmapData;
  private var _bitmapContainer:BitmapData;
  private var _states:Map<String, Array<Point>>;
  private var _animatingSpeed:Float = 125;
  private var _animatingDelta:Float = 0;
  private var _animationFrame:Int = 0;
  private var _animating:Bool = false;
  private var _currentState:String;
  private var _nextState:String;

  public var displayImage:Bitmap;

  public function new (imgData:BitmapData, sts:Array<String>, w:Int, h:Int) {
    super();
    _spritesheet = imgData;
    _currentState = sts[0];
    _states = new Map<String, Array<Point>>();
    _bitmapContainer = new BitmapData(w, h);
    var x = 0;
    var y = 0;
    for (i in 0...sts.length) {
      var flag:Bool = true;
      var points:Array<Point> = [];
      while (flag) {
        points.push(new Point(x, y));
        x += w;
        if (x + w > imgData.width) {
          x = 0;
          y += h;
          flag = false;
        }
      }
      _states.set(sts[i], points);
    }
    draw();
  }

  public function animate(deltaTime:Float, acts:Array<Bool>, mv:Array<Bool>) {
    _animating = mv[0] || mv[1] || mv[2] || mv[3];
    if (mv[0]) {
      _nextState = "walk_left";
    }
    if (mv[2]) {
      _nextState = "walk_right";
    }
    if (mv[1]) {
      _nextState = "walk_up";
    }
    if (mv[3]) {
      _nextState = "walk_down";
    }
    if (_nextState != null && _nextState != _currentState) {
      _currentState = _nextState;
      _animationFrame = 0;
      draw();
    }
    if (_animating) {
      _animatingDelta += deltaTime;
      if (_states.exists(_currentState) && _animatingDelta > _animatingSpeed) {
        if (_animationFrame >= _states[_currentState].length - 1) {
          _animationFrame = 0;
        } else {
          _animationFrame ++;
        }
        draw();
        _animatingDelta -= _animatingSpeed;
      }
    } else {
      _animatingDelta = 0;
    }
  }

  private function draw() {
    this.removeChild(displayImage);
    if (_states.exists(_currentState)) {
      var point:Point = _states[_currentState][_animationFrame];
      _bitmapContainer.copyPixels(_spritesheet, new Rectangle(point.x, point.y, _bitmapContainer.width, _bitmapContainer.height), new Point(0, 0));
    }
    displayImage = new Bitmap(_bitmapContainer);
    displayImage.x = -displayImage.width/2;
    displayImage.y = -displayImage.height;
    this.addChild(displayImage);
  }

}
