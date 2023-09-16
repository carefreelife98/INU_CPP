#include "../MyAvengers.h"
#include <string>

using namespace MyAvengers;

std::string CarefreeHero::fly(int hero_num){
    return CarefreeHero::flyName[hero_num - 1];
}