#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the vectors: ";
    cin >> n;

    vector<int> vector1(n), vector2(n), result(n);  // Use std::vector for dynamic sizing

    cout << "Enter elements of the first Vector: \n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> vector1[i];
    }

    cout << "Enter elements of the second Vector: \n";  // Corrected prompt for second vector
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> vector2[i];
    }

    // Add the two vectors
    for (int i = 0; i < n; i++) {
        result[i] = vector1[i] + vector2[i];  // Added semicolon at the end
    }

    cout << "Addition of Vectors: \n";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";  // Corrected output operator from <<< to <<
    }
    
    cout << endl; // Added newline at the end for better formatting
    return 0;
}