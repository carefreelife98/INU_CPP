// // increment counter variable with ++ operator, return value
// #include <iostream>
// using namespace std;
// ////////////////////////////////////////////////////////////////
// class Counter {
// private:
//     unsigned int count;         //count
// public:
//     Counter() : count(0) {}     //constructor
//     unsigned int get_count()    //return count
//     { return count; }
//     Counter operator ++ () {
//         ++count;
//         Counter temp;
//         temp.count = count;
//         return temp;
//     }
// };
// ////////////////////////////////////////////////////////////////
// int main() {
//     Counter c1, c2;
//     ++c1;
//     ++c1;
//     c2 = c1;
    
//     cout << "\nc2=" << c2.get_count() << endl;
//     return 0;
// }