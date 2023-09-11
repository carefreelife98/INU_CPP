package hero;

import fly.*;
import weapon.*;

abstract class Heroes {
	Iweapon weapon;
	Ifly fly;
	
	public abstract void run();
	public abstract void display();
	
	public void hasWeapon() {
		weapon.weapon();
	}
	public void canFly() {
		fly.fly();
	}
	
	public void setWeapon(Iweapon w) {
		weapon = w;
	}
	public void setFly(Ifly f) {
		fly = f;
	}
}
