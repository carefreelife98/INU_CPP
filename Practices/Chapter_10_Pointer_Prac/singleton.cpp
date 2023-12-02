//
// Created by 채승민 on 10/16/23.
//
# include "iostream"

using namespace std;

class DynamicSingleton {
private:
    string name;
    DynamicSingleton(): name("Dweb"){};
    DynamicSingleton(const DynamicSingleton &other);

    // 객체가 만들어지는 순간 전역변수가 됨.
    // 다음 부터 객체 생성시 해당 객체를 참조? 만 하게 되어 새로운 객체를 생성하지 않는다.
    static DynamicSingleton* instance;

public:
    string getName(){return name;}

    static DynamicSingleton *GetInstance(){
        if(instance == NULL)
            instance = new DynamicSingleton();
        return instance;
    }
};

// int* instance = 0;
DynamicSingleton* DynamicSingleton::instance = nullptr;

int main(){
    DynamicSingleton* obj1 = DynamicSingleton::GetInstance();
    DynamicSingleton *obj2 = DynamicSingleton::GetInstance();
    DynamicSingleton& obj3 = *obj2;
    cout << obj1->getName() << endl;
    cout << obj2->getName() << endl;
    cout << obj3.getName() << endl;
    cout << obj1 << endl;
    cout << obj2 << endl;
}