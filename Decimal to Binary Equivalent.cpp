#include <iostream>
#include <cmath> // For pow function

using namespace std;

int main() {
    int num, bit, i = 0, ans = 0, onum;

    cout << "Enter the Decimal Number, except 0: ";
    cin >> num;

    // Store the original number for display
    onum = num;

    // Check for negative input
    if (num < 0) {
        cout << "Please enter a positive decimal number." << endl;
        return 1; // Exit the program with an error code
    }

    // Convert decimal to binary
    while (num != 0) {
        bit = num & 1; // Get the last bit
        ans = bit * pow(10, i); // Add the bit to the answer in the correct position
        num = num >> 1; // Right shift the number
        i++;
    }

    cout << "The Binary equivalent of " << onum << " is " << ans << endl;

    return 0;
}