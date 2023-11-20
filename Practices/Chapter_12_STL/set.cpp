//
// Created by 채승민 on 11/17/23.
//
#include "iostream"
#include "set"

using namespace std;

int main(){
    string names[] = {"care", "free", "life", "nine", "eight"};

    // less & greater ==  내림차 순 / 오름차 순
    set<string, less<string> > nameSet(names, names + 5);   // set
    set<string , less<string> >::iterator iter;     //iterator
}