//
// Created by 채승민 on 12/13/23.
//

#include "iostream"
using namespace std;

char c[] = {'c', 's', 'm'};
char *p = c;
char *q = &c[0];

int main() {
    // mmm 출력.
    cout << c[2] << p[2] << q[2];
}