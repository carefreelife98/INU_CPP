#ifndef FLY_H
#define FLY_H

#include <iostream>

using namespace std;

class Ifly
{
public:
    virtual void fly(){}
};

class NoFly : public Ifly
{
public:
    void fly();
};

#endif
