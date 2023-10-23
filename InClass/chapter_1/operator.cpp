// #include <cstdlib>
// #include <iostream>
// using namespace std;

// enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };
// struct Passenger
// {
// 	string name; // passenger name
// 	MealType mealPref; // meal preference
// 	bool isFreqFlyer; // in the frequent flyer program?
// 	string freqFlyerNo; // the passenger¡¯s freq. flyer number
// };

// bool operator==(const Passenger& x, const Passenger& y)
// {
// 	return x.name == y.name
// 		&& x.mealPref == y.mealPref
// 		&& x.isFreqFlyer == y.isFreqFlyer
// 		&& x.freqFlyerNo == y.freqFlyerNo;
// }

// int main()
// {
// 	Passenger pass1 = { "park", LOW_FAT, true, "2240" };
// 	Passenger pass2 = { "lee", VEGETARIAN, true, "1234" };

// 	cout << (pass1 == pass2) << endl;
// 	return EXIT_SUCCESS;
// }