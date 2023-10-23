//
// Created by 채승민 on 2023/09/25.
//
#include <cstdlib>
#include <iostream>

using namespace std;

class Counter {
    unsigned int get_count(){
        return count;
    }
    Counter operator++() {
        return Counter(++count);
    }

    Counter operator++(int){
        return Counter(count++);
}

};

int main(){
    Counter c1, c2;
    cout << "\nc1=" << c1.get_count();
}