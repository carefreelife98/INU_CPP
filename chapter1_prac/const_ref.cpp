# include<cstdlib>
# include <iostream>
# include <string>

using namespace std;

bool evenSum(int a[], int n);

bool evenSum(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    return (sum % 2) == 0;
}

enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETERIAN};

struct Passenger {
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

void constArgument(const Passenger& pass){
    //pass.name = "";
    cout << pass.name << endl; // 읽는 것은 가능.
}