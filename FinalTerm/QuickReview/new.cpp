//
// Created by 채승민 on 12/13/23.
//

#include "iostream"

using namespace std;

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

struct Passenger {
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

int main(){
    char *buffer = new char[500];
    buffer[3] = 'a';
    cout << "buffer[3] = " << buffer[3] << endl;
    delete[] buffer;

    Passenger *p;

    // p 는 new Passenger 를 가리킴. (new 에 의해 반환된 포인터)
    p = new Passenger;

    // -> 를 통해 객체의 속성에 접근
    p->name = "CarefreeLife98";
    p->mealPref = NO_PREF;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";

    cout << p->name + ' '
        << p->mealPref << p->isFreqFlyer << p->freqFlyerNo << endl;
};