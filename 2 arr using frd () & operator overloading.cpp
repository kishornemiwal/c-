#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int size;

public:
    // Constructor to initialize the array with a specific size
    Array(int s) : size(s) {
        arr = new int[size];
    }

    // Destructor to free dynamically allocated memory
    ~Array() {
        delete[] arr;
    }

    // Function to take input for the array elements
    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Friend function to overload the + operator for array addition
    friend Array operator+(const Array &a1, const Array &a2);

    // Function to display the array elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Friend function to overload the + operator for adding two Array objects
Array operator+(const Array &a1, const Array &a2) {
    // Check if sizes are the same
    if (a1.size != a2.size) {
        cout << "Arrays must be of the same size to add." << endl;
        exit(1); // Exit the program if sizes are not equal
    }

    Array temp(a1.size); // Create a temporary Array to store the result

    for (int i = 0; i < a1.size; i++) {
        temp.arr[i] = a1.arr[i] + a2.arr[i];
    }

    return temp;
}

int main() {
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;

    Array arr1(size), arr2(size); // Create two Array objects of the given size

    cout << "Enter elements for the first array:" << endl;
    arr1.input(); // Input elements for the first array

    cout << "Enter elements for the second array:" << endl;
    arr2.input(); // Input elements for the second array

    Array result = arr1 + arr2; // Add the two arrays using the overloaded + operator

    cout << "Resultant array after addition:" << endl;
    result.display(); // Display the result array

    return 0;
}
