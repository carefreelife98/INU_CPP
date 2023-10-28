//
// Created by 채승민 on 10/27/23.
//

#include "iostream"
using namespace std;

class base {
public:
    virtual void show() = 0;
};

class Derv1: public base {
public:
    void show() {cout << "Derv1" << endl;}
};

class Derv2: public base {
public:
    void show(){cout << "Derv2" << endl;}
};


int main(){
    // Base bad; // 추상 클래스이기 때문에 객체 직접 생성은 불가능.
    base* arr[2];
    Derv1 dv1;
    Derv2 dv2;

    arr[0] = &dv1;
    arr[1] = &dv2;
    arr[0]->show();
    arr[1]->show();

    return 0;
};