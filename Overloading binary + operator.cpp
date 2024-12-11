
// implementation of operator overloading for complex numbers.

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading binary + operator
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;  // Calls the overloaded + operator
    c3.display();          // Output: 4 + i6
    return 0;
}
