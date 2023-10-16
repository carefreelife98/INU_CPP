////
//// Created by 채승민 on 10/16/23.
////
//#include <iostream>
//
//using namespace std;
//
//class A {
//private:
//    string str;
//public:
//    A(string _name): str(_name){}
//
//    string *getAddr(){ return &str; }
//    string getString(){ return str; }
//};
//
//int main(){
//    A s1("Dweb");
//    A s2 = s1;
//    if (s1.getString() == s2.getString())
//        cout << "The data in s2 is the same as tha in s1" << endl;
//    if (s1.getAddr() != s2.getAddr())
//        cout << "s2 is diffrent from s1" << endl;
//
//    return 0;
//}


//
// Created by 채승민 on 10/16/23.
//
#include <iostream>

using namespace std;

class A {
private:
    string& str;
public:
    A(string& _name): str(_name){}

    string *getAddr(){ return &str; }
    string getString(){ return str; }
};


int main(){
    string str = "Dweb";
    A s1(str);
    A s2 = s1;
    if (s1.getString() == s2.getString())
        cout << "The data in s2 is the same as tha in s1" << endl;
    if (s1.getAddr() != s2.getAddr())
        cout << "s2 is diffrent from s1" << endl;
    else
        cout << "s2 and s1 have the same addr" << endl;
    return 0;
}