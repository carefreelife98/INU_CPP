// // counten2.cpp
// // constructors in derived class
// #include <iostream>
// using namespace std;

// class Counter {
// protected:
//     unsigned int count;
// public:
//     Counter() : count() {}
//     Counter(int c) : count(c) {}
//     void base() {
//         cout << "dweb" << endl;
//     }
// };

// class CountDn : public Counter {
// public:
//     CountDn() : Counter() {}
//     CountDn(int c) : Counter(c) { }
//     void base() {
//         cout << "dweb_lab" << endl;
//     }
//     // void base() {
//     //     cout << "dweb_lab" << endl;
//     //     Counter::base();
//     // }
// };

// int main() {
//     CountDn cd;
//     cd.base();
//     Counter* cb =  new CountDn();
//     cd.base();
//     return 0;
// }