//
// Created by 채승민 on 10/27/23.
//

#include "iostream"
using namespace std;

class base {
public:
    virtual void show(){cout << "Base" << endl;}
};

class A: public base {
public:
    virtual void show() {cout << "A" << endl;}
};

class B: public base {
public:
    virtual void show(){cout << "B" << endl;}
};

class baseWithNotVirtual {
public:
    virtual void show(){cout << "Base" << endl;}
};

class Derv1: public baseWithNotVirtual {
public:
    virtual void show() {cout << "Derv1" << endl;}
};

class Derv2: public baseWithNotVirtual {
public:
    virtual void show(){cout << "Derv2" << endl;}
};

int main(){
//    base *ptr[2];
//    ptr[0] = new A(); ptr[1] = new B();
//    for (int i = 0; i < 2; i++) {
//        ptr[i]->show();
//    }
    Derv1 dv1;
    Derv2 dv2;
    baseWithNotVirtual* ptr;

    ptr = &dv1;
    ptr->show();
    ptr = &dv2;
    ptr->show();
};