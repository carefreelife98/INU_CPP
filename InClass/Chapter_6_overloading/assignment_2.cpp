//
// Created by 채승민 on 2023/09/25.
//
#include <cstdlib>
#include <iostream>

using namespace std;

class decrement {
private:
    unsigned int count;

public:
    decrement() : count(0){

    }
    decrement(int c) : count(c){

    }

    unsigned int get_count() const{
        return count;
    }

    //prefix
    decrement operator -- (){
        return decrement(--count);
    }
    //postfix
    decrement operator--(int){
        return decrement(count--);
    }
};

int main(){
    int test = 5;
    cout << test << "\n1\n" << endl;
    cout << test << "\n2\n" << endl;
}