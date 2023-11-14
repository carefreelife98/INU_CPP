//
// Created by 채승민 on 11/10/23.
//
#include "iostream"
#include "deque"

using namespace std;

int main(){
//    stack<>;
//    queue<>;
    deque<int> deq;
    deq.push_back(30);
    deq.push_back(40);
    deq.push_back(50);
    deq.push_front(20);
    deq.push_front(10);
    deq[2] = 33;
    for (int j = 0; j < deq.size(); j++) {
        cout << deq[j] << ' ';
    }
    cout << endl;
    return 0;
}