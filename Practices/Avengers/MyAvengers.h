#include <cstdlib>
#include <iostream>
#include <string>

#ifndef MYAVENGERS_H
#define MYAVENGERS_H

namespace MyAvengers {
    
    using namespace std;

    class CarefreeHero{
    private:
        std::string heroName[3] = {
            "[Iron man]",
            "[Hulk]",
            "[Captain Korea]"
        };
        std::string weaponName[3] = {
            "<J.A.R.V.I.S>: Repulsor Beam ON",
            "Hulk Punch!!!",
            "I can do this ALL DAY: Throwing Shield"
        };
        std::string flyName[3] = {
            "<J.A.R.V.I.S>: Flight Thrusters ON\n\n",
            "Hulk Jump!!!\n\n",
            "RUNNNNNNNNN\n\n"
        };

    public:
        // std::string genHero(int hero_num);
        std::string genHero(int hero_num){
            return heroName[hero_num - 1];
        }
        // std::string weapon(int hero_num);
        std::string weapon(int hero_num){
            return weaponName[hero_num - 1];
        }
        // std::string fly(int hero_num);
        std::string fly(int hero_num){
            return flyName[hero_num - 1];
        }
    };

    class CarefreeHeroPick {
    public:
        // int selectHero();
        // void setHero(int hero_num);
        CarefreeHero hero;

        void setHero(int hero_num) {
            if(hero_num == 0){
                for(int i = 1; i < 4; i++){
                    cout << hero.genHero(i) << " 등장" << endl;
                    cout << hero.weapon(i) << endl;
                    cout << hero.fly(i) << endl;
                }
            } else {
                cout << hero.genHero(hero_num) << " 생성" << endl;
                cout << hero.weapon(hero_num) << endl;
                cout << hero.fly(hero_num) << endl;
            }
        }

        int selectHero(){
            cout << "영웅을 고르세요!\n 0. Assemble\n 1. Iron man\n 2. Hulk\n 3. Captain Korea\n\n Exit: 4\n" << endl;
            int hero_num;
            cin >> hero_num;
            if (hero_num == 4){
                cout << "프로그램을 종료합니다." << endl;
                exit(EXIT_SUCCESS);
            } else if (0 > hero_num || hero_num > 4){
                cout << "0 ~ 4 범위의 정수를 입력하세요" << endl;
                exit(EXIT_SUCCESS);
            }
            cout << "\n---------------------START---------------------\n\n" << endl;
            
            switch (hero_num) {
            case (0):
                cout << "[Avengers!! Assemble.] \n\n" << endl;
                break;
            case (1):
                cout << "<J.A.R.V.I.S> ON\n\n" << endl;
                break;
            case (2):
                cout << "Grrrrrrr!!!\n\n" << endl;
                break;
            case (3):
                cout << "Yes Sir!\n\n" << endl;
                break;
            default:
                cout << "영웅을 고르세요!\n 1. Iron man\n 2. Hulk\n 3. Captain Korea" << endl;
                break;
            }
            return hero_num;
        }
    };
}

#endif