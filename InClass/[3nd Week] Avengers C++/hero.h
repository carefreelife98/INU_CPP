#ifndef HERO_H
#define HERO_H

#include <iostream>
#include "fly.h"
#include "weapon.h"

using namespace std;

class Heroes
{
protected:
    Iweapon* weapon;
	Ifly* fly;

public:
	virtual void run(){}
	virtual void display(){}

	void hasWeapon() {
        weapon->weapon();
	}
	void canFly() {
		fly->fly();
	}
	void setWeapon(Iweapon* w) {
		weapon = w;
	}
	void setFly(Ifly* f) {
		fly = f;
	}
};


class Ironman : public Heroes {
public:
	Ironman();
	void run();
	void display();
};

#endif