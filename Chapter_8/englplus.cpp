 #include <iostream>
 using namespace std;
 ////////////////////////////////////////////////////////////////
 class Distance {
 private:
     int feet;
     float inches;
 public:
     Distance() : feet(0), inches(0.0) { }  //constructor (two args)
     Distance(int ft, float in) : feet(ft), inches(in) { }
     void getdist() //get length from user
     {
         cout << "\nEnter feet: ";  cin >> feet;
         cout << "Enter inches: ";  cin >> inches;
     }
     void showdist() const       //display distance
     { cout << feet << "\'-" << inches << "\"" ; }
     Distance operator + (Distance) const;  //add 2 distances
 };

 //--------------------------------------------------------------
                                   //add this distance to d2
 Distance Distance::operator + (Distance d2) const  //return sum
 {
     int f= feet + d2.feet; //add the feet
     float i = inches + d2.inches; //add the inches
     if(i >= 12.0)
     {
         i-= 12.0; f++;
     }
     return Distance(f,i);
 }

 int main() {
     Distance dist1, dist3, dist4;
     dist1.getdist();
     Distance dist2(11, 6.25);
     dist3 = dist1 + dist2;
     dist4 = dist1 + dist2 + dist3;  //multiple ???+??? operators
    
     cout << "dist1 = ";  dist1.showdist(); cout << endl;
     cout << "dist2 = ";  dist2.showdist(); cout << endl;
     cout << "dist3 = ";  dist3.showdist(); cout << endl;
     cout << "dist4 = ";  dist4.showdist(); cout << endl;
     return 0;
 }
