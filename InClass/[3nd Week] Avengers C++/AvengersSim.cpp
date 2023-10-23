#include <iostream>
#include "hero.h"
#include "fly.h"
#include "weapon.h"

using namespace std;

int main(){
    Heroes* ironman = new Ironman();
    cout << "canfly()" <<endl;
    ironman->canFly();
    cout << "hasWeapon()" <<endl;
    ironman->hasWeapon();
		
	ironman->setFly(new NoFly());
	ironman->canFly();
}