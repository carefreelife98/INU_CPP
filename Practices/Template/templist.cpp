//
// Created by 채승민 on 11/27/23.
//
#include "iostream"

using namespace std;

template<class TYPE>
struct link {

};

template<class TYPE>
class linkedlist {
private:
    link<TYPE> *first;
public:
    linkedlist() {
        first = NULL;
    }

    void addItem(TYPE d);
};

template<class TYPE>
void linkedlist<TYPE>::addItem(TYPE d) {
    link<TYPE> *newlink = new link<TYPE>;
    newlink->data = d;

}