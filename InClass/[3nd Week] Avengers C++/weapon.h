#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

using namespace std;

class Iweapon
{
public:
    void weapon();
};

class DeWeapon : public Iweapon
{
public:
    void weapon();
};

#endif
