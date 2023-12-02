//
// Created by 채승민 on 11/20/23.
//

#include "fstream"
#include "iostream"
#include "string"

using namespace std;

int main() {
    char ch = 'x';
    int j = 77;
    double d = 6.02;
    string str1;
    string str2;

    ofstream outfile("./dweb/fdata.txt");

    outfile << ch
    << j
    << ' '
    << d
    << str1
    << ' '
    << str2;
    cout << "File written\n";
    return 0;
}