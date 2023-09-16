#include <string>

namespace MyAvengers {
    class CarefreeHero{
    private:
        std::string heroName[3] = {
            "Iron man",
            "Hulk",
            "Captain Korea"
        };
        std::string weaponName[3] = {
            "[J.A.R.V.I.S]: Repulsor Beam ON",
            "Hulk Punch!!!",
            "I can do this ALL DAY: Throwing Shield"
        };
        std::string flyName[3] = {
            "[J.A.R.V.I.S]: Flight Thrusters ON",
            "Hulk Jump!!!",
            "RUNNNNNNNNN"
        };

    public:
        virtual std::string genHero(int hero_num);
        virtual std::string weapon(int hero_num);
        virtual std::string fly(int hero_num);
    };

    class CarefreeHeroPick {
    public:
        virtual int selectHero();
        virtual void setHero(int hero_num);
    };
}