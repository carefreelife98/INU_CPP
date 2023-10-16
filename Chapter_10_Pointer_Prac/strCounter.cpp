//
// Created by 채승민 on 10/16/23.
//

#include "iostream"

using namespace std;

class strCount {
private:
    int count;
    char* str;
    friend class String;

    strCount(char const s[]){
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
        count = 1 ;
    }
    ~strCount(){delete[] str;}
};

class String {
private:
    strCount* psc;
public:
    String() {psc = new strCount("NULL");}
    String(char const s[]) { psc = new strCount(s); }

    String(String &S){psc = S.psc;(psc->count);}

    ~String() {
        if (psc->count == 1) {
            delete psc;
        } else {
            (psc->count)--;
        }
    }

    void display() {
        cout << psc->str;
        cout << " (addr= " << psc << ")";
    }

    void operator = (String& S) {
        if(psc->count ==1)
            delete psc;
        else
            (psc->count)--;
        psc = S.psc;
        (psc->count)++;
    }
};

int main(){
    String s3 = "Distributed Ststems and Web Engineering @ Incheon National University";
    cout << "\ns3 = "; s3.display();
    String s1;
    s1 = s3;
    cout << "\ns1="; s1.display();
    String s2(s3);
    cout << "\ns2="; s2.display();
    cout << endl;
    return 0;
}