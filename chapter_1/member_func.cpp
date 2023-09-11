// #include <cstdlib>
// #include <iostream>

// using namespace std;

// enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

// class Passenger {
// public:
// 	Passenger();					// construct
// 	bool isFrequentFlyer() const;	// is this a frequent flyer?
// 	void makeFrequentFlyer(const string& newFreqFlyerNo);
// 	// ...  other member functions
// private:
// 	string name;
// 	MealType mealfreq;
// 	bool isFreqFlyer;
// 	string freqFlyerNo;
// };

// int main() {
// 	Passenger pass;
// 	if (!pass.isFrequentFlyer())
// 		pass.makeFrequentFlyer("392934");	
// 	//illegal!! why? name is private member
// 	//pass.name = "Gi Seok Park";
// }

// Passenger::Passenger(){
// 	isFreqFlyer = false;
// 	mealfreq = NO_PREF;
// }

// bool Passenger::isFrequentFlyer() const {
// 	//isFreqFlyer = true; // const keyword
// 	return isFreqFlyer;
// }

// void Passenger::makeFrequentFlyer(const string& newFreqFlyerNo) {
// 	//newFreqFlyerNo = "12345";  // const keyword
// 	isFreqFlyer = true;
// 	freqFlyerNo = newFreqFlyerNo;
// }