// // increment counter variable with ++ operator, return value
// #include <iostream>
// #include <cstring>
// using namespace std;
// ////////////////////////////////////////////////////////////////
// class Counter {
// private:
//     unsigned int count;         //count
//     int* array;
// public:
//     Counter(): count(0) {
//         array = new int[10];
//     }  
//     unsigned int get_count()    //return count
//     { return count; }

//     void set_array(int idx, int val){
//         array[idx] = val;
//     }

//     void get_array(int idx){
//         cout << "get_array: " << array[idx] << endl;
//     }
//     Counter operator ++ () {
//         ++count;
//         Counter temp;
//         temp.count = count;
//         return temp;
//     }
//     /*
//     Counter& operator= (const Counter &ref) {
//         delete[] array;

//         return *this
//     }
//     */
// };
// ////////////////////////////////////////////////////////////////
// int main() {
//     Counter c1, c2;
//     c2 = c1;

//     c1.set_array(1, 100);
//     c2.get_array(1);

//     return 0;
// }