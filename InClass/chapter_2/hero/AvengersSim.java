package hero;

import fly.NoFly;

public class AvengersSim {

	public static void main(String[] args) {
		Heroes ironman = new Ironman();
		ironman.canFly();
		ironman.hasWeapon();
		
		ironman.setFly(new NoFly());
		ironman.canFly();
	}

}
