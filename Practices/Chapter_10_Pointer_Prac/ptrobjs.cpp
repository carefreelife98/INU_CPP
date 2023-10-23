//
// Created by 채승민 on 10/16/23.
//

#include "iostream"

using namespace std;

class person {
protected:
    char name[40];
public:
    void setName( ){
        cout << "Enter Name :";
        cin >> name;
    }

    void printName(){
        cout << "\n Name is : " << name;
    }
};

int main(){
    person *persPtr[100];
    int n = 0;
    char choice;
    do {
        persPtr[n] = new person;
        persPtr[n]->setName();
        n++;
        cout << "Enter another? (y/n) ";
        cin >> choice;
    } while (choice == 'y');
    for (int j = 0; j < n; j++) {

    }
}