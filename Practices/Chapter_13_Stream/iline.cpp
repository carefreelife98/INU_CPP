//
// Created by 채승민 on 11/20/23.
//

#include "fstream"
#include "iostream"
using namespace std;
int main() {
    const int MAX = 80;
    char buffer[MAX];
    ifstream infile("TEXT.TXT");
    while (!infile.eof()) {
        infile.getline(buffer, MAX);
        cout << buffer << endl;
    }
    return 0;
}