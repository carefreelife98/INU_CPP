//
// Created by 채승민 on 2023/10/06.
//
# include <iostream>
using namespace std;

class Counter {
protected:
    unsigned int count;
public:
    Counter() : count(0) {}
    Counter(int c) : count(c){}
    unsigned int get_count() const {return  count;}
    Counter operator ++ () {return Counter(++count);}
};

class CountDn : public Counter {
public:
    CountDn(int x):Counter(x){}
    Counter operator -- () {
        return Counter(--count);
    };
};

int main(){
    // CountDn Instance 생성.
    // 생성자가 없지만 Default Constructor 존재 (기능은 없음)
    CountDn c1;
    cout << "\nc1=" << c1.get_count();
    ++c1; ++c1; ++c1;
    cout << "\nc1=" << c1.get_count();
    --c1; --c1;
    cout << "\nc1=" << c1.get_count();
    cout << endl;
    return 0;
}