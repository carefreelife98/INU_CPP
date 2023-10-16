//
// Created by 채승민 on 10/16/23.
//
# include "iostream"
using namespace std;

class person {
protected:
    char name;
public:
    void setName( ){
        cout << "Enter Name :";
        cin >> name;
    }

    void printName(){
        cout << endl << name;
    }

    string getName(){
        return name;
    }
};

int main(){
    void bsort(person **, int);
    person* persPtr[100];
    int n = 0;
    char choice;
    do {

        persPtr[n] = new person;
        persPtr[n]->setName();
        n++;
        cout << "Enter another? (y/n)";
        cin >> choice;
    } while (choice == 'y');
    cout << "\nUnsorted list:";
    for (int j = 0; j < n; j++) {
        persPtr[j]->printName();
    }
    cout << endl;
    return 0;
}

void bsort(person **pp, int n){
    void order(person **, person **);
    int j, k;
    for (j = 0; j < n; j++) {
        for (k = j + 1; k < n; k++) {
            order(pp + j, pp + k);
        }
    }
}

void order(person **pp1, person **pp2);