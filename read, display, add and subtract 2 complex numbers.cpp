//. Write a program to read, display, add and subtract 2 cotnplex numbers.

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize the complex number
    Complex(float r = 0, float i = 0)
    {
        real=r;
        imag=i;
    } 

    // Function to read a complex number
    void read() {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> imag;
    }

    // Function to display a complex number
    void display()  {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function to add two complex numbers
    Complex add(const Complex& other) 
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex& other)
    {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main() {
    Complex num1, num2, sum, difference;

    // Reading two complex numbers
    cout << "Enter the first complex number:\n";
    num1.read();
    cout << "Enter the second complex number:\n";
    num2.read();

    // Adding and subtracting the complex numbers
    sum = num1.add(num2);
    difference = num1.subtract(num2);

    // Displaying the results
    cout << "\nFirst Complex Number: ";
    num1.display();

    cout << "Second Complex Number: ";
    num2.display();

    cout << "\nSum of the two complex numbers: ";
    sum.display();

    cout << "Difference of the two complex numbers: ";
    difference.display();

    return 0;
}
