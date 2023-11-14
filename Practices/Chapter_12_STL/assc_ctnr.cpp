//
// Created by 채승민 on 11/6/23.
//
#include "iostream"
#include "map"
using namespace std;

int main(){
    map<int, string> ma;
    ma.insert(make_pair(1, "AAA"));
    ma.insert(make_pair(3, "BBB"));

    ma[5] = 10;
    for (auto iter = ma.begin(); iter != ma.end(); ++iter) {
        cout << "Key: " << iter->first << " value: " << iter->second << '\n';
    }
    cout << "\n" << " \n";
    cout << "Searching ! " << '\n';
    cout << "key:  5, Value : ?";
    cout << ma.find(5)->second << endl;

    ma.erase(3);
    for (auto iter = ma.begin(); iter != ma.end(); ++iter){
        cout << "key: " << iter->first << " value: " << iter->second << '\n';
    }
    cout << endl;
    return 0;

}