#include <iostream>
using namespace std;

class Base {
protected:
    int value;
public:
    Base(int v) : value(v) {}
};

class Derived : public Base {
public:
    Derived(int v) : Base(v) {}
    void display() { cout << "Value: " << value << endl; }
};

int main() {
    Derived d(10);
    d.display();
    return 0;
}
