//
// Created by 채승민 on 12/14/23.
//
#include "iostream"

using namespace std;

void func(int value, int &ref){
    value++;
    ref++;
    cout << value << endl;
    cout << ref << endl;
}

int main() {
    int cat = 1;
    int dog = 5;
    func(cat, dog);
    cout << cat << endl;
    cout << dog << endl;

    return EXIT_SUCCESS;
}