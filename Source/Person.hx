package ;

class Person extends Body {

	public function new() {
		super('yoshi', 50, 50);
		this.speed = 5;
	}

	public function action(stuff:Array<Source>):Resource {
		for (st in stuff) {
			if(this.hitTestObject(st)){
				return st.extract();
			}
		}
		return null;
	}
}
