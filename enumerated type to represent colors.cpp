#include <iostream>
#include <string>

using namespace std;  // Include the standard namespace

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE,
    WHITE,
    BLACK
};

// Function to convert enum value to string
string getColorName(Color color) {
    switch (color) {
        case RED: return "Red";
        case GREEN: return "Green";
        case BLUE: return "Blue";
        case YELLOW: return "Yellow";
        case ORANGE: return "Orange";
        case PURPLE: return "Purple";
        case WHITE: return "White";
        case BLACK: return "Black";
        default: return "Unknown Color";
    }
}

int main() {
    int input;

    cout << "Enter a number (0-7) to select a color:\n";
    cout << "0 - Red\n1 - Green\n2 - Blue\n3 - Yellow\n4 - Orange\n5 - Purple\n6 - White\n7 - Black\n";

    cin >> input;

    if (input < 0 || input > 7) {
        cout << "Invalid input! Please enter a number between 0 and 7.\n";
    } else {
        Color selectedColor = static_cast<Color>(input);
        cout << "You selected the color: " << getColorName(selectedColor) << endl;
    }

    return 0;
}
