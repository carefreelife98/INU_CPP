package heroes;

import fly.IFly;
import weapon.IWeapon;

public class Ironman implements IWeapon, IFly {

    @Override
    public void BimWeapon() {
        System.out.println("Bim");
    }

    @Override
    public void DeWeapon() {

    }

    @Override
    public void NoWeapon() {

    }

    @Override
    public void FlySky() {
        System.out.println("fly sky");
    }

    @Override
    public void FlySpace() {

    }

    @Override
    public void NoFly() {

    }
}
