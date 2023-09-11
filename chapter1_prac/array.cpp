#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){
    char* buffer = new char[500];
    printf("%p \n", buffer);
    buffer[3] = 'a';

    cout << buffer[3] << endl;
    delete [] buffer;
    cout << buffer[3] << endl;
    return 0;
}