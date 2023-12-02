// // strplus.cpp
// // overloaded operator concatenates strings
 
// #include <iostream>
// using namespace std;
// #include <string.h>      //for strcpy(), strcat()
// #include <stdlib.h>      //for exit()

// ////////////////////////////////////////////////////////////////
// class String {
// private:
//     enum { SZ = 80 };
//     char str[SZ];
// public:
//     String() { strcpy_s(str, ""); }
//     String(const char s[]) { strcpy_s(str, s); }
//     void display() const { cout << str; }
//     String operator + (String ss) const  //add Strings
//     {
//         String temp;                //make a temporary String
//         if (strlen(str) + strlen(ss.str) < SZ)
//         {
//             strcpy_s(temp.str, str);     //copy this string to temp
//             strcat_s(temp.str, ss.str);  //add the argument string
//         }
//         else
//         {
//             cout << "\nString overflow"; exit(1);
//         }
//         return temp;                //return temp String
//     }
// };
// ////////////////////////////////////////////////////////////////
// int main()
// {
//     String s1 = "Merry Christmas!";   //uses constructor 2
//     String s2 = " Happy new year!";
//     String s3;
//     s1.display();
//     s2.display();
//     s3.display();
//     s3 = s1 + s2;
//     cout << endl;
//     s3.display();
//     cout << endl;
//     // We can simply do that by using STL string.
//     string name = "Dweb";
//     string lab = "lab";
//     string lab_name = name + " - " + lab;
//     cout << lab_name << endl;
//     return 0;
// }