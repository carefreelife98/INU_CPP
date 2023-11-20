//
// Created by 채승민 on 11/20/23.
//

#include "fstream"
using namespace std;

int main() {
    ofstream outfile("TEXT.TXT");

    outfile << "Care\n";
    outfile << "Free\n";
    outfile << "Life\n";
    return 0;
}