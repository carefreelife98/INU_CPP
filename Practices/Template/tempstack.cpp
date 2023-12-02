//
// Created by 채승민 on 11/27/23.
//
#include "iostream"

using namespace std;

const int MAX = 100;

template <class Type>
class Stack {
private:
    Type st[MAX];
    int top;
public:
    Stack () {
//        top = -1;
    }
    void push(Type var){
//        st[++top] = var;
    }
    Type pop() {
//        return st[top--];
    }
};

// 구현을 class 외부에 하기 위해서는 template<class type> 을 구현 부분에 다시 한번 붙혀주어야 한다.
template<class Type>
Stack<Type>::Stack() {
    top = -1;
}

template<class Type>
void Stack<Type>::push(Type var) {
    st[++top] = var;
}

template<class Type>
Type Stack<Type>::pop() {
    return st[top--];
}


int main() {

    Stack<float> s1;
    s1.push(1111.1F);
    s1.push(2222.2F);
    s1.push(3333.3F);
    cout << s1.pop();
}