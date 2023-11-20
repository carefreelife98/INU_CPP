//
// Created by 채승민 on 11/17/23.
//

#include "iostream"
#include "vector"
#include "iterator"

using namespace std;

int main(){
    int beginRange, endRange;
    int arr[] = {11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    vector<int> v1(arr, arr + 10);
    vector<int> v2 (10);
    cout << " Enter range to be copied (ex: 2 5): ";
    cin >> beginRange >> endRange;
    vector<int>::iterator iter1 = v1.begin() + beginRange; // 2개 건너 뛴 값을 가리키고 있음
    vector<int>::iterator iter2 = v1.begin() + endRange; // 5개 건너 뛴 값을 가리키고 있음
    vector<int>::iterator iter3;

    // copy(원본 시작 iterator, 원본 끝 iterator, 복사받는 시작 iterator)
    iter3 = copy(iter1, iter2, v2.begin());
    iter1 = v2.begin();
    cout << " - " << iter3 - v2.begin() << endl;
    cout << "x" << v2.end() - v2.begin() << endl;

    while (iter1 != iter3) {
        cout << *iter1++ << ' ';
    } cout << endl;

    return 0;
}