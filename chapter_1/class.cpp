#include <cstdlib>
#include <iostream>

using namespace std;

class Counter { // a simple counter
public:
	Counter(); // initialization
	int getCount(); // get the current count
	void increaseBy(int x); // add x to the count
private:
	int count; // the counter¡¯s value
};

int main() {
	Counter ctr;
	cout << ctr.getCount() << endl;
	ctr.increaseBy(3);
	cout << ctr.getCount() << endl;
	ctr.increaseBy(5);
	cout << ctr.getCount() << endl;
}

Counter::Counter() { count = 0;}
int Counter::getCount() { return count; }
void Counter::increaseBy(int x) { count += x; }