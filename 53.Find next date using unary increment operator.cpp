
// 53. Write a cpp program to find the next date using unary increment operator

#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;
    // Function to determine if a year is a leap year
    bool isLeapYear(int y) const
    {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // Function to get the number of days in a month
    int daysInMonth(int m, int y) const
    {
        if (m == 2)
        {
            return isLeapYear(y) ? 29 : 28;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            return 30;
        }
        else
        {
            return 31;
        }
    }

public:
    // Constructor to initialize date
    Date(int d, int m, int y)
    {  day=d; month=m; year=y; }
    // Overload unary increment operator to find the next date
    void operator++()
    {
        day++;
        if (day > daysInMonth(month, year))
        {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Function to display the date
    void display() const
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    int day, month, year;

    // Input the current date
    cout << "Enter the current date (day month year): ";
    cin >> day >> month >> year;

    Date date(day, month, year);

    cout << "Current ";
    date.display();

    // Find the next date
    ++date;

    cout << "Next ";
    date.display();

    return 0;
}
