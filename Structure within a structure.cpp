// Write a program to read and display informationr of a student using structure within a structure.

#include <iostream>
using namespace std;

// Define a structure to store student information
struct Student {
    string name;
    int rollNumber;
    string course;
};

// Function to read student information
void readStudentInfo(Student &student) {
    cout << "Enter student's name: ";
    cin>>student.name;  // Read full name including spaces
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter course: ";
    cin >> student.course;
}

// Function to display student information
void displayStudentInfo(const Student &student) {
    cout << "\nStudent Information:\n";
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    Student student; // Create a student structure variable

    // Read student information
     // Ignore any newline character left in the input buffer
    readStudentInfo(student);

    // Display student information
    displayStudentInfo(student);

    return 0;
}
