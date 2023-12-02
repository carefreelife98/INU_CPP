//
// Created by 채승민 on 11/27/23.
//
#include "iostream"

using namespace std;

template<class atype>
int find(atype *array, atype value, int size){
    for (int j = 0; j < size; j++) {
        if (array[j] == value) {
            return j;
        }
    }
    return -1;
}

template<class atype, class btype>
int find() {

}

char chrArr[] = {1, 3, 5, 7, 9, 11, 13};
char ch = 5;

int intArr[] = {1, 3, 5, 9, 11, 13};
int in = 6;

long lonArr[] = {1L, 3L, 5L, 7L, 9L, 11L, 13L};
long lo = 11L;

double dubArr[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0};
double dub = 4.0;



int main() {
    cout << "\n 5 in chrArray: index=" << find(chrArr, ch, 7);
    cout << endl;
}