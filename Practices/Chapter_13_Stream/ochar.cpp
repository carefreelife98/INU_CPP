//
// Created by 채승민 on 11/20/23.
//

#include "fstream"
#include "iostream"
#include "string"

using namespace std;
int main() {
    string str = "Carefreelife"
                 "Incheon National University";
    ofstream outfile("TEST.TXT");
    for (int j = 0; j < str.size(); j++) {
        outfile.put(str[j]);
    }
    cout << "File written\n";
    return 0;
}