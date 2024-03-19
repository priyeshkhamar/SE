// Write a C++ program to create a class called Car that has private member variables for company, model, and year.
// Implement member functions to get and set these variables.

#include <iostream>
using namespace std;

class Car
{
private:
    string company, model;
    int year;

public:
    // Function to set company, model, and year
    void setDetails(string c, string m, int y)
    {
        company = c;
        model = m;
        year = y;
    }

    // Function to get all details
    void getDetails()
    {
        cout << "Company: " << company << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << "\n";
    }
};

int main()
{
    Car obj;

    string company, model;
    int year;

    cout << "Enter Company: ";
    cin >> company;

    cout << "Enter Model: ";
    cin >> model;

    cout << "Enter Year: ";
    cin >> year;

    // Set details
    obj.setDetails(company, model, year);

    // Get and display details
    cout << "\nCar Details:\n";
    obj.getDetails();

    return 0;
}