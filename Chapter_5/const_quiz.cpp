//
// Created by 채승민 on 2023/09/22.
//

#include <cstdlib>
#include <iostream>
using namespace std;

class Passenger {
private:
    const int age;
    const string name;
public:
    void getField() const {
        cout << "age: " << age << " & name: " << name << endl;
    }
    Passenger() : age(26), name("Chae") {}

//    // Error.
//    // Member 변수가 상수인  경우 (const) 위와 같이 생성자를 생성해야 해당 변수를 Initialize 하여 사용 할 수 있다.
//    Passenger() {
//        age = 26;
//        name = "Chae"
//    }
};

int main(){
    Passenger P1;
    P1.getField();
}
