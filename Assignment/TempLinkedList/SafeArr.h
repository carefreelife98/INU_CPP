//
// Created by 채승민 on 12/2/23.
//

#ifndef C___CODES_SAFEARR_H
#define C___CODES_SAFEARR_H

#include <iostream>
#include <exception>

using namespace std;

template <typename T>
class SafeArray {
private:
    T *arr;
    int len;
    SafeArray(const SafeArray &arr) {}
//    SafeArray &operator=(const SafeArray &arr) {}

public:
    SafeArray(int len);
    T &operator[](int index);
    T &operator[](int index) const;
    int GetArrLen() const;
    ~SafeArray();
};

template <typename T>
SafeArray<T>::SafeArray(int len) : len(len) {
    arr = new T[len];
}

template <typename T>
T& SafeArray<T>::operator[] (int index) {
    if( index < 0 || index >= GetArrLen() ) {
        // out_of_range 예외를 Catch 문으로 던진다
        throw out_of_range("\nIndex out of bounds");
    }
    return arr[index];
}

template <typename T>
T& SafeArray<T>::operator[] (int index) const {
    if( index < 0 || index >= GetArrLen() ) {
        // out_of_range 예외를 Catch 문으로 던진다
        throw out_of_range("\nIndex out of bounds");
    }
    return arr[index];
}

template <typename T>
int SafeArray<T>::GetArrLen() const {
    return len;
}
template <typename T>
SafeArray<T>::~SafeArray() {
    delete[] arr;
}

#endif //C___CODES_SAFEARR_H