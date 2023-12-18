//
// Created by 채승민 on 12/13/23.
//

#include "iostream"
using namespace std;

int main(){
    string s = "to be";
    string t = "not " + s;
    string u = s + " or " + t;

    if (s > t) {
        // to be 가 not to be 보다 사전 상 앞에 있습니다.
        cout << s << " 가 " << t << " 보다 사전 상 앞에 있습니다." << endl;
        // to be or not to be
        cout << u << endl;
    }
}