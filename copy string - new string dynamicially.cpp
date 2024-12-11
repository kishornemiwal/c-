//Write a program to copy a given string into a new string. Menu»r.v for the new string 
//must be allocated dynamically.

#include <iostream>
#include <cstring> // For strcpy() and strlen() functions
using namespace std;

int main() {
    // Original string
    char original[] = "Hello, World!";

    // Dynamically allocate memory for the new string
    char* copy = new char[strlen(original) + 1]; // +1 for the null terminator

    // Copy the original string into the new string
    strcpy(copy, original);

    // Display the copied string
    cout << "Original String: " << original << endl;
    cout << "Copied String: " << copy << endl;

    // Free the allocated memory
    delete[] copy;

    return 0;
}
