// // englpleq.cpp
// // overloaded ???+=??? assignment operator

// #include <iostream>
// using namespace std;
// ////////////////////////////////////////////////////////////////
// class Distance {
// private:
//     int feet;
//     float inches;
// public:
//     Distance() : feet(0), inches(0.0) {  }                      //constructor (two args)
//     Distance(int ft, float in) : feet(ft), inches(in) {}
//     void getdist() //get length from user
//     {
//         cout << "\nEnter feet: ";  cin >> feet;
//         cout << "Enter inches: ";  cin >> inches;
//     }
//     void showdist() const        //display distance
//     { cout << feet << "\'-" << inches << '\"'; }
//     void operator += ( Distance );
// };
// //--------------------------------------------------------------
// void Distance::operator += (Distance d2) {
//     feet += d2.feet;
//     inches += d2.inches;
//     if(inches >= 12.0) {
//         inches -= 12.0;
//         feet++;
//     }
// }
// ////////////////////////////////////////////////////////////////
// int main() {
//     Distance dist1;                 //define dist1
//     dist1.getdist();                //get dist1 from user
//     cout << "\ndist1 = ";  dist1.showdist();
//     Distance dist2(11, 6.25);       //define, initialize dist2
//     cout << "\ndist2 = ";  dist2.showdist();
//     dist1 += dist2;                 //dist1 = dist1 + dist2
//     cout << "\nAfter addition,";
//     cout << "\ndist1 = ";  dist1.showdist();
//     cout << endl;
//     return 0;
// }
