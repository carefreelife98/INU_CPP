// // counten.cpp
// // inheritance with Counter class
// #include <iostream>
// using namespace std;

// class StaticBase {
// protected:
//     unsigned int count;
// public:
//     StaticBase() { count = 0; }
//     void set_count(int xx) {
//         if (xx < 0) { count = 0; }
//         else { count = xx;}
//     }
//     unsigned int get_count() const { return count; }
// };

// class StaticDerived : public StaticBase {
// public:
//     void set_minus (int xx) { count = xx; }
// };

// int main() {
//     StaticDerived crazyGuy;
//     crazyGuy.get_count();
//     cout << "++: " << crazyGuy.get_count() << endl;
//     crazyGuy.set_minus(-10);
//     cout << "CrazyGuy's done --: " << crazyGuy.get_count() << endl;
    
//     return 0;
// }