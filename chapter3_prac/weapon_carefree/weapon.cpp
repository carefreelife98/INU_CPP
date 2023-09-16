#include "../MyAvengers.h"
#include <string>

using namespace MyAvengers;

std::string CarefreeHero::weapon(int hero_num){
    return CarefreeHero::weaponName[hero_num - 1];
}