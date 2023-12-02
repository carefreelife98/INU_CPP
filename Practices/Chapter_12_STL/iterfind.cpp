//
// Created by 채승민 on 11/17/23.
//

#include "iostream"
#include "list"

using namespace std;

int main(){
    list<int> theList(5); // container
    list<int>::iterator iter; // iterator
    int data = 0;
    for (iter = theList.begin(); iter != theList.end(); iter++) {
        *iter = data += 2;
    }
    iter = find(theList.begin(), theList.end(), 8);
    if (iter != theList.end()) {
        cout << "\nFound 8.\n";
    } else
        cout << "\n Did not Find 8.\n";
    return 0;
}