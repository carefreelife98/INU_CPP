//
// Created by 채승민 on 10/30/23.
//
#include "iostream"
using namespace std;

class alpha {
private:
    int data1;
public:
    alpha() : data1(99) {}
    friend class beta;
};

class beta{
public:
    void func1(alpha a) {cout << "\n data1 = " << a.data1; }
    void func2(alpha a) {cout << "\n data1 = " << a.data1; }
};

int main(){
    alpha a = alpha();
    beta().func1(a);
    beta().func2(a);

    return 0;
}