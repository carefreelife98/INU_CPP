#include <cstdlib>
#include <iostream>

using namespace std;

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

class Passenger {
public:
	Passenger();															// default constructor
	Passenger(const string& nm, MealType mp, const string& ffn = "NONE");	// constructor given member values
	Passenger(const Passenger& pass);										// copy constructor
	bool isFrequentFlyer() const;											// is this a frequent flyer?
	void makeFrequentFlyer(const string& newFreqFlyerNo);
private:
	string name;
	MealType mealpref;
	bool isFreqFlyer;
	string freqFlyerNo;
};

int main() {
	Passenger p1;										// default constructor
	Passenger p2("Gi Seok Park", NO_PREF, "72527988");	// 2nd constructor
	Passenger p3("Sungjin Ryu", REGULAR);				// not a frequent flyer
	Passenger p4(p3);									// copied from p3
	Passenger p5 = p2;									// copied from p2
	Passenger* pp1 = new Passenger;						// default constructor
	Passenger* pp2 = new Passenger("Joe Blow", NO_PREF);// 2nd constr.
	Passenger pa[20];									// uses the default constructor
}

Passenger::Passenger() {	// default constructor
	name = "--NO NAME--";
	mealpref = NO_PREF;
	isFreqFlyer = false;
	freqFlyerNo = "NONE";
}

Passenger::Passenger(const string& nm, MealType mp, const string& ffn) { // constructor given member values
	name = nm;
	mealpref = mp;
	isFreqFlyer = (ffn != "NONE");	// true only if ffn given
	freqFlyerNo = ffn;
}

Passenger::Passenger(const Passenger& pass) {	// copy constructor
	name = pass.name;
	mealpref = pass.mealpref;
	isFreqFlyer = pass.isFreqFlyer;
	freqFlyerNo = pass.freqFlyerNo;
}

bool Passenger::isFrequentFlyer() const {
	//isFreqFlyer = true; // const keyword
	return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const string& newFreqFlyerNo) {
	//newFreqFlyerNo = "12345";  // const keyword
	isFreqFlyer = true;
	freqFlyerNo = newFreqFlyerNo;
}




