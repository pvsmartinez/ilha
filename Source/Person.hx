package ;

class Person extends Body {

	public function new() {
		super('yoshi', 50, 50);
		this.speed = 5;
	}

	public function action(stuff:Array<Source>):Void {
		for (st in stuff) {
			if(this.hitTestObject(st)){
				st.extract();
				return;
			}
		}
	}

	public function fishing():Int {
		if (1) { /*ferramenta == fishing_rod*/
			
		}

		/*else {
			balao erro
		}*/
	}
}
