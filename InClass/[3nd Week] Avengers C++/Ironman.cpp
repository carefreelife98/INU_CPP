#include <iostream>
#include "hero.h"

using namespace std;

Ironman::Ironman(){
	weapon = new DeWeapon();
	fly = new NoFly();
}


void Ironman::run(){
    cout << "So Fast~" << endl;
}

void Ironman::display(){
    cout << "I am Iron man." << endl;

}