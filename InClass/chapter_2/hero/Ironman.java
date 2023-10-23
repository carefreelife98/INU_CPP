package hero;

import fly.FlySky;
import weapon.BimWeapon;

public class Ironman extends Heroes{
	Ironman(){
		weapon = new BimWeapon();
		fly = new FlySky();
	}
	
	public void run() {
		System.out.println("So Fast~");
	}
	public void display() {
		System.out.println("I am Iron man.");
	}
}
