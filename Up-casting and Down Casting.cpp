#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base class\n"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived class\n"; }
};

int main() {
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj; // Upcasting
    basePtr->show();

    Derived *derivedPtr = static_cast<Derived*>(basePtr); // Downcasting
    derivedPtr->show();
    return 0;
}
