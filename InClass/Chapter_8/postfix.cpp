 // postfix.cpp
 // overloaded ++ operator in both prefix and postfix
 #include <iostream>
 using namespace std;
 ////////////////////////////////////////////////////////////////
 class Counter {
 private:
     unsigned int count;
 public:
     Counter() : count(0) {}
     Counter(int c) : count(c) {}
     unsigned int get_count() const
     { return count; }
     Counter operator ++ ()          //increment count (prefix 전위 증강)
     {                               //increment count, then return
         return Counter(++count);    //an unnamed temporary object
     }
     Counter operator ++ (int)      // Postfix (후위 증강)
     {
         return Counter(count++);
     }
 };
 ////////////////////////////////////////////////////////////////
 int main() {
     Counter c1, c2;
     cout << "\nc1=" << c1.get_count();
     cout << "\nc2=" << c2.get_count();
     ++c1;
     c2 = ++c1;
     cout << "\nc1=" << c1.get_count();
     cout << "\nc2=" << c2.get_count();
     c2 = c1++;
    
     cout << "\nc1=" << c1.get_count();    //display again
     cout << "\nc2=" << c2.get_count() << endl;
     return 0;
 }