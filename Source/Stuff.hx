package ;

import openfl.filters.BitmapFilter;
import openfl.filters.GlowFilter;
import openfl.filters.BitmapFilterQuality;

class Stuff extends Body {

  private var shine:GlowFilter;

	public function new(img:String, width:Int, height:Int){
    super(img, width, height);
	}

  public function focus(target:Person) {
    var fters:Array<BitmapFilter> = [];
    if(this.hitTestObject(target)) {
      // fters.push(new GlowFilter(0x00FFFF, 1, 10, 10, 10, BitmapFilterQuality.HIGH));
    }
    this.bitmap.filters = fters;
  }

}
