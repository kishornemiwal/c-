
// unary operator overloading

#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int val) : value(val) {}

    // Overloading unary minus (-) operator
    Number operator-() {
        return Number(-value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10);
    Number num2 = -num1;  // Calls the overloaded unary minus operator
    num2.display();       // Output: -10
    return 0;
}
