#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    int marks;
};
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Array to store students
    Student students[n];

    // Input student details
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> students[i].marks;
    }

    // Sort students by marks in descending order using bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].marks < students[j + 1].marks)
            {
                // Swap students[j] and students[j + 1]
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display sorted list of students
    cout << "\nList of students sorted by marks:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << students[i].name << ", Marks: " << students[i].marks << endl;
    }

    return 0;
}
