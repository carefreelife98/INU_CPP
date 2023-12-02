//
// Created by 채승민 on 10/22/23.
//
//

#include "cstdlib"
#include "iostream"

using namespace std; // std:: 사용 할 수 있도록 namespace 를 설정.

int main(){
    int x, y;
    // std = system's standard library
    std::cout << "Please enter two numbers: ";
    std::cin >> x >> y;

    int sum = x + y;
    std::cout << "Their sum is " << sum << std::endl; // endl = \n

    return EXIT_SUCCESS; // 성공적으로 종료 = return 0;
}

// Fundamental Types
void fundamentalTypes(){
    bool Boolean_Value = true; // false
    char Character = 'c';
    short Short_Integer = -32768; // ~ Max 32767
    int Integer = -2147483648; // ~ MAX 2,147,483,647
    long Long_Integer = -2147483648; // ~ MAX 2,147,483,647

    // float (Single)옵션의 경우, Double옵션을 사용할 때에 비해 정밀도는 떨어지는 대신,
    // 사용하는 메모리량, 혹은 생성되는 파일의 크기가 약 절반 가까이 감소.
    // 이 때, 사용하는 메모리의 양이나 파일의 크기가 줄어들 경우,
    // 그만큼 시뮬레이션이나 파일 처리 속도가 빨라질 수 있음을 의미.
    float Single_Precision = 3.4; // 3.4E +/- 38 (7 Digits)
    double Double_Precision = 1.7; // 1.7E +/- 308 (15 Digits)
}