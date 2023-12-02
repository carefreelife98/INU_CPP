#include <iostream>
using namespace std;

class Pizza {
protected:
    string description;
public:
    Pizza(){};
    Pizza(string name): description(name){};
    virtual string getDescription()=0;
    virtual double cost()=0 ;
};

class Topping: public Pizza {
public:
    virtual string getDescription() = 0;
    virtual double cost() = 0;
};

class Potato : public Pizza {
public:
    Potato(): Pizza("Potato Pizza"){};
    string getDescription() {return description;};
    double cost() {return 20000;}
};

class Cheese : public Topping {
private:
    Pizza* piz;
public:
    Cheese(Pizza* _piz) : piz(_piz) {};
    string getDescription() { return piz->getDescription() + " + cheese"; };
    double cost() { return 500 + piz->cost(); };
};

class Tomato : public Topping {
private:
    Pizza* piz;
public:
    Tomato(Pizza* _piz) : piz(_piz){};     // 아래와 동일
    // Tomato(Pizza* _piz) {piz = _piz; }; // 복사: 디폴트대입연산자 호출
    string getDescription() { return piz->getDescription() + " + tomato"; };
    double cost() { return 300 + piz->cost(); };
};

int main(){
    Pizza* pizza = new Potato();
    pizza = new Cheese(pizza);
    pizza = new Tomato(pizza);
    cout << pizza->cost() << " : " << pizza->getDescription() << endl;
    return 0;
}