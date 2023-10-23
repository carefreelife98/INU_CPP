//
// Created by 채승민 on 2023/09/22.
//

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string s = "a dog";
    s += "is a dog";

    cout << s.find("dog") << endl; // index 2

    // index 11 ( 5번째 이후 index 부터 찾기)
    cout << s.find("dog", 5) << endl;

    // string::npos == -1
    if (s.find("doug") == string::npos) // true
        cout << "true" << endl;

    cout << s << endl;
    cout << "substr: " << s.substr(7, 5) << endl;

    s.replace(2, 3, "frog");
    cout << "replace: " << 5 << endl; //11

    s.erase(6, 3);

    s.insert(0, "is ");
}