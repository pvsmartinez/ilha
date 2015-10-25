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

	public function new(kind:Sources) {
    var png:String = "sources/" + kind;
    super(png, 180, 180);
    this.kind = kind;
    switch ( kind ) {
      case bush:
        this.respawTime = 60;
        this.resource = "cherry";
      case tree:
        this.respawTime = 45;
        this.resource = "wood";
    }
  }

  public function extract():Resource {
    if (this.respaw == -1) {
      this.removeChild(this.bitmap);
      this.respaw = this.respawTime;
      return new Resource(wood);
    }
    return null;
  }

  public function reapear() {
    if (this.respaw >=0) {
      if(this.respaw == 0) {
        this.addChild(this.bitmap);
      }
      this.respaw --;
    }
  }

}
