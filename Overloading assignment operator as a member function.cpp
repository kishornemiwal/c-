

//  Overloading assignment operator as a member function

#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}

    // Overloading assignment operator as a member function
    MyClass& operator=(const MyClass& other) {
        if (this != &other) { // Check for self-assignment
            value = other.value; // Copy value
        }
        return *this; // Return current object
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    
    obj1 = obj2; // Calls overloaded assignment operator

    cout << "obj1 value: " << obj1.value << endl; // Output: 20
    return 0;
}