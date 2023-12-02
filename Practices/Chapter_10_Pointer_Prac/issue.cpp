//
// Created by 채승민 on 10/16/23.
//

#include <iostream>

using namespace std;

class String {
private:
    char * str;
public:
    String(char * s){
        str = s;
    }

    ~String(){
        cout << "Deleting str/\n";
        delete[] str;
    }

    void display(){
        cout << str << endl;
    }
};

void eraser(String xx){
    // nothing todo
}

int main(){
    char *s = new char[100];
    cin >> s;
    String s1 = s;
    eraser(s);
    s1.display();
    return 0;
}