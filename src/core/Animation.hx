package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.geom.Rectangle;
import openfl.geom.Point;

class Animation extends Sprite {

  private var _spritesheet:BitmapData;
  private var _bitmapContainer:BitmapData;
  private var _states:Array<Array<Point>> = [];
  private var _animatingSpeed:Float = 125;
  private var _animatingDelta:Float = 0;
  private var _animationFrame:Int = 0;
  private var _animating:Bool = false;
  private var _currentState:Int = 0;

  public var displayImage:Bitmap;

  public function new (imgData:BitmapData, sts:Int, w:Int, h:Int) {
    super();
    _spritesheet = imgData;
    _bitmapContainer = new BitmapData(w, h);
    var x = 0;
    var y = 0;
    for (i in 0...sts) {
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
      _states.push(points);
    }
    draw();
  }

  public function animate(deltaTime:Float, animating:Bool, ?nextState:Int) {
    if (animating) {
      if (nextState != null && nextState > -1 && nextState != _currentState) {
        _currentState = nextState;
        _animationFrame = 1;
        draw();
      } else {
        _animatingDelta += deltaTime;
        if (_currentState < _states.length && _animatingDelta > _animatingSpeed) {
          if (_animationFrame >= _states[_currentState].length - 1) {
            _animationFrame = 0;
          } else {
            _animationFrame ++;
          }
          draw();
          _animatingDelta -= _animatingSpeed;
        }
      }
    } else {
      _animatingDelta = 0;
      if (animating != _animating) {
        _animationFrame = 0;
        draw();
      }
    }
    _animating = animating;
  }

  private function draw() {
    this.removeChild(displayImage);
    if (_currentState < _states.length) {
      var point:Point = _states[_currentState][_animationFrame];
      _bitmapContainer.copyPixels(_spritesheet, new Rectangle(point.x, point.y, _bitmapContainer.width, _bitmapContainer.height), new Point(0, 0));
    }
    displayImage = new Bitmap(_bitmapContainer);
    displayImage.x = -displayImage.width/2;
    displayImage.y = -displayImage.height;
    this.addChild(displayImage);
  }

}
