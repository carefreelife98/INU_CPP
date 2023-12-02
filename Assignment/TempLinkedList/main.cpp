//
// Created by 채승민 on 11/27/23.
//
#include "SLinkedList.h"
#include "User.h"
#include "SafeArr.h"

#include "string"
#include "iostream"

using namespace std;
// 실제로 사용자 정의 자료형 사용해서 돌려보기
// 본인 의견 및 코드 추가해서 레포트 형식으로 제출.

const int JOB_FOR_USERS = 3;

int main() {
    // LinkedList 생성
    SLinkedList<string> jobList;
    SLinkedList<User> userList;
    string job[JOB_FOR_USERS] = {"Warrior", "Magician", "Archer"};
    // Job & User Data 생성
    User users[JOB_FOR_USERS] = {
            User(26, "Chae Seung Min", 177.2, false),
            User(23, "Kim Dong Hyun", 178.4, false),
            User(25, "Hwang Da Hun", 181.6, true)
    };

    // SafeArray 생성
    try {
        SafeArray<string> jobSafeArr(JOB_FOR_USERS);
        for (int i = 0; i < JOB_FOR_USERS; i++) {
            jobSafeArr[i] = job[i];
        }
    } catch (exception& e) {
        cout << "Exception caught !! Exception: " << e.what() << endl;
    }

    // Job & User 정보 Template LinkedList 에 추가
    for(int i = 0; i < JOB_FOR_USERS; i++) {
        jobList.addFront(job[i]);
        userList.addFront(users[i]);
    }

    // 공백 에러 검출
    if(jobList.empty() || userList.empty()) {
        perror("ERROR!! 연결 리스트에 공백 존재.");
        return 1;
    }

    // 전체 유저 정보 출력
    for (int i = 0; i < JOB_FOR_USERS; i++) {
        cout << "\n====================== User " << i + 1 << " ======================" << endl;
        // SLinkedList<string> jobList;
        cout << "Job: " << jobList.front() << endl;
        cout << "----------------------------------------------------" << endl;

        // SLinkedList<User> userList;
        cout << "ID: " << userList.front().id << endl;
        cout << "Name: " << userList.front().name << endl;
        cout << "Height: " << userList.front().height << endl;
        cout << "Carefree? " << userList.front().carefree << endl;
        cout << "----------------------------------------------------\n\n" << endl;
        jobList.removeFront();
        userList.removeFront();

        // empty method 사용
        if (jobList.empty() && userList.empty()) {
            cout << "\n전체 유저 정보 출력 완료\n" << endl;
        }
    }

    return 0;
}