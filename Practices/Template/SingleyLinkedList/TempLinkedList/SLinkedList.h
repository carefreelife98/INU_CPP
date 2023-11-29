//
// Created by 채승민 on 11/27/23.
//

#ifndef C___CODES_SLINKEDLIST_H
#define C___CODES_SLINKEDLIST_H

//#pragma once
#include "string"
#include "iostream"

using namespace std;

template <typename E>
class SLinkedList;

template<typename E>
class SNode {
private:
    E elem;
    SNode<E> *next;
    friend class SLinkedList<E>;
public:
    SNode() : elem(), next(this) { }
};

template<typename E>
class SLinkedList {
public:
    SLinkedList();
    ~SLinkedList();
    bool empty() const;
    // return front element
    const E &front() const;
    void addFront(E &e);
    void removeFront();
private:
    SNode<E>* head;
};

template <typename E>
SLinkedList<E>::SLinkedList() : head(NULL) {}

template<typename E>
SLinkedList<E>::~SLinkedList() {
    while (!empty()) {
        removeFront();
    }
}

template<typename E>
bool SLinkedList<E>::empty() const {
    return head == NULL;
}

template<typename E>
const E &SLinkedList<E>::front() const {
    return head->elem;
}

template<typename E>
void SLinkedList<E>::addFront(E &e) {
    SNode<E> *newNode = new SNode<E>;
    newNode->elem = e;
    newNode->next = head;
    head = newNode;
}

template<typename E>
void SLinkedList<E>::removeFront() {
    if(empty()) {
        return;
    }
    SNode<E>* temp = head;
    head = head->next;
    delete temp;
}


#endif //C___CODES_SLINKEDLIST_H
