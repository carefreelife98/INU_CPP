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

// Passenger Reference Type (값의 복사가 발생하지 않음)
// 
void test_A (Passenger& p) {
    cout << "in test_A, " << p.name << endl;
    printf("test_A: %p \n", &p);
}

// Passenger Type (값의 복사가 발생 - Call By Value)
// 값을 복사해서 전달
void test_B (Passenger p) {
    cout << "in test_B, " << p.name << endl;
    printf("test_B: %p \n", &p);
}

int main(){
    Passenger p;
    
    Passenger* p1 = new Passenger;
    
    (*p1).name = "park"; // C style?
    p1->name = "park"; // C++ Style

    p.name = "DWeb";
    p.mealPref = REGULAR;
    p.isFreqFlyer = false;
    p.freqFlyerNo = "None";

    printf("main: %p \n", &p);

    test_A(p);
    test_B(p);
}   