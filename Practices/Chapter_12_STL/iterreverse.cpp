//
// Created by 채승민 on 11/17/23.
//
#include "iostream"
#include "list"

using namespace std;

int main(){
    int arr[] = {2, 4, 6, 8, 10};
    list<int> theList;
    for (int j = 0; j < 5; j++) {
        theList.push_back(arr[j]);
    }
    list<int>::reverse_iterator revit;
    revit = theList.rbegin();
    while (revit != theList.rend()) {
        cout << *revit++ << ' ';
    }
    cout << endl;

    // 아래와 같이 for 문의 파라미터를 거꾸로 사용하면 reverse iterator 기능을 충분히 할 수 있다.
    // 따라서 reverse iterator 는 잘 사용하지 않음.
    list<int>::iterator it;
    for (it = theList.end(); it != theList.begin(); it--) {

    }

    return 0;
}