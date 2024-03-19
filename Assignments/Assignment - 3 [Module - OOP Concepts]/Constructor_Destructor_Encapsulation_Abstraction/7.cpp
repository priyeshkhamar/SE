// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void setDate(int d, int m, int y)
    {
        if (isValidDate(d, m, y))
        {
            day = d;
            month = m;
            year = y;
        }
        else
        {
            cout << "Invalid date." << endl;
        }
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    // Function to validate if the date is valid
    bool isValidDate(int d, int m, int y)
    {
        if (m < 1 || m > 12)
        {
            return false;
        }
        if (d < 1 || d > 31)
        {
            return false;
        }
        if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        {
            return false;
        }
        if (m == 2)
        {
            if (isLeapYear(y))
            {
                if (d > 29)
                {
                    return false;
                }
            }
            else
            {
                if (d > 28)
                {
                    return false;
                }
            }
        }
        return true;
    }

    // Function to check if the year is a leap year
    bool isLeapYear(int y)
    {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
};

int main()
{
    Date date;

    int day, month, year;

    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Year: ";
    cin >> year;

    date.setDate(day, month, year);

    cout << "\nDate: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;
}