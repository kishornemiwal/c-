
// demonstrating use of the pure virtual function with the use of base and derived classes

#include <iostream>
using namespace std;

// Base class with a pure virtual function
class Subject {
public:
    // Pure virtual function
    virtual void Name() = 0;
};

// Derived class Dog implementing the pure virtual function
class Math : public Subject {
public:
    void Name() override {
        cout << "Mathhematics" << endl;
    }
};

// Derived class Cat implementing the pure virtual function
class Physics : public Subject {
public:
    void Name() override {
        cout << "Physics & Chemistry" << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Math mt;
    Physics phy;

    // Calling the sound method on each object
    mt.Name();
    phy.Name();

    return 0;
}
