//
// Created by 채승민 on 11/20/23.
//

#include "fstream"
#include "iostream"
using namespace std;

int main() {
    char ch;
    ifstream infile("TEST.TXT");
    while (infile) {
        infile.get(ch);
        cout << ch;
    }
    cout << endl;
    return 0;
}