package ;

enum Sources {
  bush;
  tree;
}

class Source extends Stuff {

  private var kind:Sources;
  private var resource:String;
  private var respawTime:Int;
  private var respaw:Int = -1;

	public function new(kind:String) {
    var png:String = "sources/" + kind;
    super(png, 180, 180);
    this.kind = Type.createEnum(Sources, kind);
    switch ( this.kind ) {
      case bush:
        this.respawTime = 10;
        this.resource = "cherry";
      case tree:
        this.respawTime = 5;
        this.resource = "wood";
    }
  }

  public function extract():Resource {
    if (this.respaw == -1) {
      this.removeChild(this.bitmap);
      this.respaw = this.respawTime;
      return new Resource(this.resource);
    }
    return null;
  }

  public function everySecond() {
    if (this.respaw >=0) {
      if(this.respaw == 0) {
        this.addChild(this.bitmap);
      }
      this.respaw --;
    }
  }

}
