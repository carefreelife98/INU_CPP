//
// Created by 채승민 on 11/17/23.
//
#include "iostream"
#include "list"
using namespace std;
int main(){
    list<int> iList(5);
    list<int>::iterator it; //iterator

    int data = 0;
    for (it = iList.begin(); it != iList.end(); it++) {
        *it = data +=2;
    }

    // 처음엔 5개로 시작 했지만 이후 추가가 가능. (앞/뒤)
    iList.push_back(100);
    iList.push_front(99);
    cout << "X" << iList.size() << endl;

    for (it = iList.begin(); it != iList.end(); it++) {
        cout << *it << ' ';
    }

    cout << endl;
    return 0;
}