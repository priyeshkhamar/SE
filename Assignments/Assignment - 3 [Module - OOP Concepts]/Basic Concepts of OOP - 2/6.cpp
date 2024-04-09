// Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    // Function to set the values of name, age, and country
    void setValues()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Country: ";
        cin >> country;
    }

    // Function to display all details
    void displayDetails()
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Country: " << country << "\n";
    }
};

int main()
{
    Person person;

    // Setting the values
    person.setValues();

    // Displaying all details
    person.displayDetails();
}
