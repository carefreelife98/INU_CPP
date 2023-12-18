//
// Created by 채승민 on 12/14/23.
//

#include "iostream"

using namespace std;

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

class Passenger {
private:
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
public:
    Passenger(){}; // default constructor
//    Passenger(const string& nm, MealType mp, const string& ffn = "NONE");
    Passenger(const string& nm, MealType mp, string ffn)
        : name(nm), mealPref(mp), isFreqFlyer(ffn != "NONE"){
        freqFlyerNo = ffn;
    }

    string get_n(){
        return name;
    }

    MealType get_pref() {
        return mealPref;
    }

    bool get_isFreq() {
        return isFreqFlyer;
    }

    string get_No(){
        return freqFlyerNo;
    }


    Passenger(const Passenger &pass){
        name = pass.name;
        mealPref = pass.mealPref;
        isFreqFlyer = pass.isFreqFlyer;
        freqFlyerNo = "None2";
    }; // copy constructor
};

int main() {
    Passenger p1 = Passenger("carefreelife", REGULAR, "NONE");
    Passenger p2 = Passenger();
    Passenger p3 = Passenger(p1);

    cout << p1.get_n() << p1.get_isFreq() << p1.get_pref() << p1.get_No() << endl;
    cout << p2.get_n() << p2.get_isFreq() << p2.get_pref() << p2.get_No() << endl;
    cout << p3.get_n() << p3.get_isFreq() << p3.get_pref() << p3.get_No() << endl;
}