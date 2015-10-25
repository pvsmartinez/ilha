package ;

import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;

enum Shapes {
	circle;
	square;
}

class Body extends Sprite {

	public var speed:Int;

	private var img:String;
	private var bitmap:Bitmap;

	public function new(img:String, width:Int, height:Int) {
		super();
		this.img = "img/"+img+".png";
    addHitArea(width, height);
		addPng();
	}

	private function addHitArea(width:Int, height:Int):Void {
		this.graphics.beginFill(0xffffff, 0.3);
		this.graphics.drawRect(-width/2, -height/2, width, height);
		this.graphics.endFill();
	}

  private function addPng():Void {
    var bitmapData = Assets.getBitmapData (this.img);
    this.bitmap = new Bitmap(bitmapData);
    this.addChild(this.bitmap);
    bitmap.x = - this.bitmap.width / 2;
    bitmap.y = - this.bitmap.height / 2;
  }

	public function move(l:Bool, u:Bool, r:Bool, d:Bool):Void {
		var spd:Float = this.speed;
		if ((l && u) || (l && d) || (r && u) || (r && d))
			spd = spd * Math.sqrt(2)/2;
    if (l)
      this.x -= spd;
    if (u)
      this.y -= spd;
    if (r)
      this.x += spd;
    if (d)
      this.y += spd;
  }

}
