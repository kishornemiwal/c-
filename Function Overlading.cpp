// Function Overloading

#include <iostream>
using namespace std;

class Print {
public:
    // Function to print an integer
    void display(int i) {
        cout << "Integer: " << i << endl;
    }
    
    // Function to print a double
    void display(double d) {
        cout << "Double: " << d << endl;
    }
    
    // Function to print a string
    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.display(5);       // Calls display(int)
    p.display(5.5);     // Calls display(double)
    p.display("Hello"); // Calls display(string)
    return 0;
}