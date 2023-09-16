// #include <cstdlib>
// #include "../MyAvengers.h"
// #include <iostream>


// namespace MyAvengers {
//     using namespace std;
//     CarefreeHero hero;

//     void CarefreeHeroPick::setHero(int hero_num) {
//         if(hero_num == 0){
//             for(int i = hero_num; i < 4; i++){
//                 cout << hero.genHero(hero_num) << " 생성" << endl;
//                 cout << hero.weapon(hero_num) << endl;
//                 cout << hero.fly(hero_num) << endl;
//             }
//         } else {
//             cout << hero.genHero(hero_num) << " 생성" << endl;
//             cout << hero.weapon(hero_num) << endl;
//             cout << hero.fly(hero_num) << endl;
//         }
//     }

//     int CarefreeHeroPick::selectHero(){
//         cout << "영웅을 고르세요!\n 1. Iron man\n 2. Hulk\n 3. Captain Korea" << endl;
//         int hero_num;
//         cin >> hero_num;
        
//         switch (hero_num) {
//         case (0):
//             cout << "Avengers!! Assemble." << endl;
//             break;
//         case (1):
//             cout << "J.A.R.V.I.S" << endl;
//             break;
//         case (2):
//             cout << "Grrrrrrr!!!" << endl;
//             break;
//         case (3):
//             cout << "Yes Sir!" << endl;
//             break;
//         default:
//             cout << "영웅을 고르세요!\n 1. Iron man\n 2. Hulk\n 3. Captain Korea" << endl;
//             break;
//         }
//         return hero_num;
//     }
// }