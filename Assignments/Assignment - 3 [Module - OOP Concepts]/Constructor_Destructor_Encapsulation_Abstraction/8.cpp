// Write  C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement using of aggregation

#include <iostream>
#include <string>

using namespace std;

class Address
{
private:
    string address1;
    string city;
    string state;
    string country;
    string postalCode;

public:
    Address(string a, string c, string st, string co, string pc)
    {
        address1 = a;
        city = c;
        state = st;
        country = co;
        postalCode = pc;
    }

    void display()
    {
        cout << "Address: " << address1 << ", " << city << ", " << state << ", " << country << ", " << postalCode << "\n";
    }
};

class Student
{
private:
    string name;
    string className;
    int rollNumber;
    double marks;

public:
    Student() {}

    void setData(string n, string cls, int roll, double m)
    {
        name = n;
        className = cls;
        rollNumber = roll;
        marks = m;
    }

    char calculateGrade()
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else if (marks >= 50)
            return 'E';
        else
            return 'F';
    }

    void displayInfo()
    {
        cout << "Name: " << name << "\n";
        cout << "Class: " << className << "\n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

int main()
{
    string name, className, address1, city, state, country, postalCode;
    int rollNumber;
    double marks;

    cout << "Enter Student 1 Details:"
         << "\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Class: ";
    getline(cin, className);
    cout << "Roll Number: ";
    cin >> rollNumber;
    cout << "Marks: ";
    cin >> marks;
    cin.ignore();

    cout << "Enter Student 1 Address details:"
         << "\n";
    cout << "Address 1: ";
    cin >> address1;
    cout << "City: ";
    cin >> city;
    cout << "State: ";
    cin >> state;
    cout << "Country: ";
    cin >> country;
    cout << "Postal Code: ";
    cin >> postalCode;

    Address obj(address1, city, state, country, postalCode);
    Student student1;
    student1.setData(name, className, rollNumber, marks);

    cout << "\nEnter Student 2 Details:"
         << "\n";
    cout << "Name: ";
    cin >> name;
    cout << "Class: ";
    cin >> className;
    cout << "Roll Number: ";
    cin >> rollNumber;
    cout << "Marks: ";
    cin >> marks;

    cout << "Enter student 2 Address Details:"
         << "\n";
    cout << "Address 1: ";
    cin >> address1;
    cout << "City: ";
    cin >> city;
    cout << "State: ";
    cin >> state;
    cout << "Country: ";
    cin >> country;
    cout << "Postal Code: ";
    cin >> postalCode;

    Address obj2(address1, city, state, country, postalCode);
    Student student2;
    student2.setData(name, className, rollNumber, marks);

    cout << "\nStudent 1 Information:"
         << "\n";
    student1.displayInfo();
    obj.display();

    cout << "\nStudent 2 Information:"
         << "\n";
    student2.displayInfo();
    obj2.display();
}
