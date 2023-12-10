//
// Created by 채승민 on 12/4/23.
//

#include "memory"
#include "iostream"

using namespace std;

class Person {
private:
    string name;
    int born;

    Person(string _name, int _born):
        name(_name), born(_born) {};
};

//int main() {
//    unique_ptr<Person> p1 =
//            make_unique<Person>
//}