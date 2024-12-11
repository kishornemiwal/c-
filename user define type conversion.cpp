#include <iostream>
using namespace std;

class Distance {
public:
    int meters;
    
    // Constructor for converting int to Distance
    Distance(int m) : meters(m) {}
    
    // Conversion operator for converting Distance to int
    operator int() {
        return meters;
    }
};

int main() {
    Distance d(5);
    int length = d; // Implicitly calls the conversion operator
    cout << "Distance in meters: " << d.meters << endl; // Output: 5
    cout << "Length: " << length << endl; // Output: 5
    return 0;
}