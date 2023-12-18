//
// Created by 채승민 on 12/13/23.
//

#include "iostream"

using namespace std;

int main() {
    string DevOps = "Unknown";
    // Who is DevOps? Unknown
    cout << "Who is DevOps? " << DevOps << endl;

    // reference 생성 (me)
    string& me = DevOps;
    me = "Carefreelife98";

    // Now, Who is DevOps? Carefreelife98
    cout << "Now, Who is DevOps? " << DevOps << endl;
}