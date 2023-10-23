// //empmult.cpp
// //multiple inheritance with employees and degrees
// #include <iostream>
// using namespace std;
// const int LEN = 80;           //maximum length of names
// ////////////////////////////////////////////////////////////////
// class student
// {
// private:
//     char school[LEN];
//     char degree[LEN];
// public:
//     void getedu()
//     {
//         cout << "\tEnter name of school or university: ";
//         cin >> school;
//         cout << "\tEnter highest degree earned \n";
//         cout << "\t(Highschool, Bachelor’s, Master’s, PhD): ";
//         cin >> degree;
//     }
//     void putedu() const
//     {
//         cout << "\n\tSchool or university: " << school;
//         cout << "\n\tHighest degree earned: " << degree;
//     }
// };
// ////////////////////////////////////////////////////////////////
// class employee {
// private:
//     char name[LEN];         //employee name
//     unsigned long number;   //employee number
// public:
//     void getdata()
//     {
//         cout << "\n\tEnter last name: "; cin >> name;
//         cout << "\tEnter number: "; cin >> number;
//     }
//     void putdata() const
//     {
//         cout << "\n\tName: " << name;
//         cout << "\n\tNumber: " << number;
//     }
// };

// class manager : private employee, private student  //management
// {
// private:
//     char title[LEN];
//     double dues;
// public:
//     void getdata() {
//         employee::getdata();
//         cout << "\tEnter title: ";          cin >> title;
//         cout << "\tEnter golf club dues: "; cin >> dues;
//         student::getedu();
//     }
//     void putdata() const {
//         employee::putdata();
//         cout << "\n\tTitle: " << title;
//         cout << "\n\tGolf club dues: " << dues;
//         student::putedu();
//     }
// };

// class scientist : private employee, private student  //scientist
// {
// private:
//     int pubs;
// public:
//     void getdata() {
//         employee::getdata();
//         cout << "\tEnter number of pubs: "; cin >> pubs;
//         student::getedu();
//     }
//     void putdata() const {
//         employee::putdata();
//         cout << "\n\tNumber of publications: " << pubs;
//         student::putedu();
//     }
// };

// class laborer : public employee             //laborer
// {
// };

// int main() {
//     manager m1;
//     scientist s1, s2;
//     laborer l1;
//     cout << endl;
//     cout << "\nEnter data for manager 1";
//     m1.getdata();
//     cout << "\nEnter data for scientist 1";
//     s1.getdata();
//     cout << "\nEnter data for scientist 2";
//     s2.getdata();
//     cout << "\nEnter data for laborer 1";
//     l1.getdata();
//     cout << "\nData on manager 1";
//     m1.putdata();
//     cout << "\nData on scientist 1";
//     s1.putdata();
//     cout << "\nData on scientist 2";
//     s2.putdata();
//     cout << "\nData on laborer 1";
//     l1.putdata();
//     cout << endl;
//     return 0;
// }