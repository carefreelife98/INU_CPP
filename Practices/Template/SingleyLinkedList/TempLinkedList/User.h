//
// Created by 채승민 on 11/27/23.
//

#ifndef C___CODES_USER_H
#define C___CODES_USER_H

#include "string"

using namespace std;

class User {
public:
    int id;
    string name;
    float height;
    bool carefree;
    User();
    User(int id, const string& name, float height, bool carefree);
};

User::User() : id(), name(), height(), carefree() { }

User::User(int id, const string& name, float height, bool carefree) {
    this->id = id;
    this->name = name;
    this->height = height;
    this->carefree = carefree;
}


#endif //C___CODES_USER_H
