package ;

enum Tools {
  fishingRod;
}

class Tool extends Stuff {

  public var kind:Tools;

	public function new(kind:String) {
    var png:String = "tools/" + kind;
    super(png, 35, 35);
    this.kind = Type.createEnum(Tools, kind);
  }

}