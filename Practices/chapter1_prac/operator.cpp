# include<cstdlib>
# include <iostream>
# include <string>

// namespace 명시하여 string이 어디에 존재 할지를 정해주어야 에러가 발생하지 않는다.
using namespace std; 

enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETERIAN};

struct Passenger {
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

// 객체에 다시 한번 정의를 내린다.
bool operator==(const Passenger& x, const Passenger& y){
    return x.name == y.name
        && x.mealPref == y.mealPref
        && x.isFreqFlyer == y.isFreqFlyer
        && x.freqFlyerNo == y. freqFlyerNo;
}

main() {
    Passenger pass1 = {"carefree", LOW_FAT, true, "2240"};
    Passenger pass2 = {"carefreeLife VEGETARIAN, true,"};
     
}
