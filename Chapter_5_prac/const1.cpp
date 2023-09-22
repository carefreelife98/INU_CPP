//
// Created by 채승민 on 2023/09/22.
//
#include <cstdlib>
#include <iostream>

using namespace std;

class aClass {
private:
    int alpha;
public:
    void nonFunc(){ alpha = 99; }
    void conFunc() const;

    const int* conFunc2() const{
        return &alpha;
    }
};

void aClass::conFunc() const {
    cout << alpha << endl;
}

class Distance {
private:
    int feet;
    int inches;
public:
    void getdist() {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    }
    void showdist() const {
        cout << feet << endl;
        cout << inches << endl;
    }
};


int main(void){
    aClass A;
    const int* temp = A.conFunc2();
//    *temp = 10;
    cout << *temp << endl;

    const Distance football(300, 0);
    football.showdist();
    cout << endl;
    return 0;
}