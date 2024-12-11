#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class show function called." << endl;
    }
};

class Derived : public Base {
public:
    void show() override   // Overrides Base's show function
    {
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Base* b;           // Base class pointer
    Derived d;        // Derived class object
    b = &d;

    b->show(); // Calls Derived's show() due to overriding
    return 0;
}
