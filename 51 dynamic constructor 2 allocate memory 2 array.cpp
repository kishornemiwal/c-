
// write a program that uses dynamic constructor to allocate memory to an array. count  the number of even and odd elements.

#include <iostream>
using namespace std;

class Array {
private:
    int* arr;  // Pointer for dynamic array
    int size;

public:
    // Dynamic constructor
    Array(int n) : size(n) {
        arr = new int[size];  // Allocating memory dynamically
    }

    // Method to fill array with elements
    void fillArray() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Method to count even and odd numbers
    void countEvenOdd() {
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        cout << "Number of even elements: " << evenCount << endl;
        cout << "Number of odd elements: " << oddCount << endl;
    }

    // Destructor to free allocated memory
    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    Array arr(n);  // Create an Array object with dynamic constructor
    arr.fillArray();
    arr.countEvenOdd();

    return 0;
}
