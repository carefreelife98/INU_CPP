//
// Created by 채승민 on 10/9/23.
//

#include <iostream>

using namespace std;

int main() {
    void bSort(int *, int);
    const int N = 10;
    int arr[N] = {37, 84, 62, 91, 11, 65, 57, 28, 19, 49};
    bSort(arr, N);
    for (int j = 0; j < N; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}

void bSort(int *ptr, int n){
    cout << ptr[0] << endl;
    for(int i = 0; i < n; i++){
        cout << "i = " << i << endl;
        for(int j = 0; j < n; j++) {
            if (ptr[j] > ptr[j + 1]) {
                cout << " j = " << j << endl;
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
                cout << "ptr[j] = " << ptr[j] << " ptr[j+1] = " << ptr[j + 1] << endl;
            }
        }
        for (int j = 0; j < n; j++) {
            cout << ptr[j] << " ";
        }
        cout << endl;
    }
}