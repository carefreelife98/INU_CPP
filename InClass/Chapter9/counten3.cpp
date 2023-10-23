// // counten2.cpp
// // constructors in derived class
// #include <iostream>
// using namespace std;

// class Counter {
// protected:
//     unsigned int count;
// public:
//     Counter() : count(1) {}
//     Counter(int c) : count(c) {}
//     unsigned int get_count() const { return count; }
//     Counter operator ++ () { return Counter(++count); }
// };

// class CountDn : public Counter {
// public:
// };

// int main() {
//     CountDn c1;
//     cout << c1.get_count() << endl;
//     return 0;
// }