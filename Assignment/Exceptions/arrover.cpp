#include <iostream>
using namespace std;

const int LIMIT = 100;         //array size

class safeArray : exception{
private:
    int arr[LIMIT];
public:
    int& operator [](int n)  //note: return by reference
    {
        if( n < 0 || n >= LIMIT ) {
            throw out_of_range("\nIndex out of bounds");
//            cout << "\nIndex out of bounds";
//            exit(1);
        }
        return arr[n];
    }
};

class safeArrayChar :exception {
private:
    char arrOnlyForA[1];
public:
    char& operator [](int n)  //note: return by reference
    {
        if( n < 0 || n >= LIMIT ) {
//            throw out_of_range("\nIndex out of bounds");
            throw exception();
        }
        return arrOnlyForA[n];
    }

    void isA();
};

void safeArrayChar::isA() {
    if(arrOnlyForA[0] != 'a') {
        throw string ("I said give me a !!!\n");
    }
}

int main() {
    safeArray sa1;
    try {
        for(int j=0; j<LIMIT; j++)  //insert elements
            sa1[j] = j*10;
        for(int j=0; j<LIMIT + 1; j++) {
            // exception 발생
            if(j == 3) j = LIMIT + 1;
            int temp = sa1[j];
            cout << "Element " << j << " is " << temp << endl;
        }
    } catch (exception& e) {
        cout << "\nException Caught!! : " << e.what() << "\n" << endl;
    }

    try {
        safeArrayChar sc;
        sc[0] = 'b';
        cout << "I'll give you: " << sc[0] << endl;
        sc.isA();
    } catch (string& e) {
        cout << e << endl;
    }

    return 0;
}
