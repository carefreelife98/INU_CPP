//
// Created by 채승민 on 11/27/23.
//
#pragma once
#include "iostream"

using namespace std;

template <class N>
class node {
private:
    N elem;
    node *next;
};

template <class N>
class tempLinkedList {
public:
    tempLinkedList();

    ~tempLinkedList();

    bool empty() const;
    const
};