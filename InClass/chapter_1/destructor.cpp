#include <cstdlib>
#include <iostream>

using namespace std;

class Vect {		// a vector class
public:
	Vect(int n);	// constructor, given size
	~Vect();		// destructor
private:
	int* data;		// an array holding the vector
	int size;		// number of array entries
};
Vect::Vect(int n) {		// constructor
	size = n;
	data = new int[n];	// allocate array
}
Vect::~Vect() {		// destructor
	cout << "delete" << endl;
	delete[] data;	// free the allocated array
}

void func1() {
	Vect vector(10);
}

int main() {
	Vect vector(10);
	
	func1();
	cout<< "program end" << endl;
	
	// Vect* v = new Vect(10);
}