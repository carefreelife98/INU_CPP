//
// Created by 채승민 on 2023/10/06.
//
#include <iostream>
using namespace std;

class StaticBase {
protected:
    unsigned int count;
public:
    StaticBase() { count = 0; }
    void set_count(int x) {
        if(x < 0){count = 0;}
        else{ count = x; }
    }

    unsigned int get_count() const {return count;}
};

class StaticDericed : public StaticBase {
public:
    void set_minus (int x) { count == x; }

};