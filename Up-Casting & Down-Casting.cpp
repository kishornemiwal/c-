
// Up-Casting & Down-Casting

#include <iostream>
using namespace std;

class Base {
public:
    void print() { cout << "base" << endl; }
};

class Derived :public Base{
public:
    void print() { cout << "derived" << endl; }

};

int main()
{
    // Upcasting
    Base *pBase;
    Derived d;
    d.print();
    pBase = &d;
    d.print();

    // Downcasting
    Derived *pDerived;
    Base *b;
    pDerived = (Derived*)b;
}
