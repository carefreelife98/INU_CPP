//
// Created by 채승민 on 10/27/23.
//
#include "iostream"

using namespace std;

class Base {
public:
    ~Base(){ // virtual ~Base() // virtual destructor
        cout << "Base Destroyed\n" ;
    }
};

class Derv: public Base {
public:
    ~Derv(){cout<<"Derv Destroyed\n";}
};

int main(){
    Base *pBase = new Derv;
    delete pBase;
    return 0;
}