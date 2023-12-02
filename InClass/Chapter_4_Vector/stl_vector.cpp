#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

class Passenger {
public:
	bool isFrequentflyer() const;
    void makeFrequentFlyer(const string& newFreqFLyerNo);
private:
	string name;
	MealType mealpref;
	bool isFreqFlyer;
	string freqFlyerNo;
};

int main(){
    vector<int> scores(100);
    vector<char> buffer(500);
    vector<Passenger> passenList(20); // 20개가 넘어가면 자동으로 스케일 아웃.

    int i = 10;
    cout << scores[i] << endl; // 벡터는 배열처럼 사용이 가능한 장점이 있다.
    
    cout << buffer.at[i] << endl;
    buffer.at[2 * i] = 'a';
    buffer.at[i] = buffer.at[2 * i];
    cout << buffer.at[i] << endl;
    vector<int> newScores = scores;

    cout << scores.size() << endl;
    scores.resize(scores.size() + 10);
    cout << scores.size() << endl;   


    // vector<int>::iterator iter;

    // vector<int> temp;
    // cout << "carefreelife :" << temp.capacity() << endl;
    // temp.push_back(20);

    // vector<int> temp;

    // temp.push_back(20);
    // temp.push_back(50);
    // temp.push_back(100);
    // temp.push_back(200);

    // // iterator 생성 방식.
    // // 일반적으로 Iterator 로 사용할 벡터 생성 직후에 Iterator 도 생성해둔다.
    // vector<int> scores(100);
    // vector<int>::iterator iter_scores;

    // // iterator 은 포인터 기능을 하는 객체이므로 연산자 오버로딩이 가능하다.
    // // 따라서 iter_scores++ 이 가능해진다.
    // // 이 경우, iter_scores++ 은 다음 원소를 가리키게 된다.
    // for(iter_scores = temp.begin(); iter_scores != temp.end(); iter_scores++){
    //     cout << *iter_scores << endl;
    // }

    // Passenger 자료구조 2개 생성
    Passenger p1;
    Passenger p2;

    // Passenger 자료 구조를 담는 벡터 생성 및 Passenger 2개 저장
    vector<Passenger> temp1;
    temp1.push_back(p1);
    temp1.push_back(p2);

    // Passenger Iterator 생성
    vector<Passenger>::iterator iter_pass;

    for(iter_pass = temp1.begin(); iter_pass != temp1.end(); iter_pass++){
        cout << (*iter_pass).isFrequentflyer() << endl;
    }

}