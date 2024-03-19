// Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void readData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void writeData()
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Student : public Person
{
protected:
    double percentage;

public:
    void readData()
    {
        Person::readData();
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void writeData()
    {
        Person::writeData();
        cout << "Percentage: " << percentage << "%"
             << "\n";
    }
};

class Teacher : public Person
{
protected:
    double salary;

public:
    void readData()
    {
        Person::readData();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void writeData()
    {
        Person::writeData();
        cout << "Salary: Rs." << salary << "\n";
    }
};

int main()
{
    Student obj;
    Teacher obj1;

    cout << "Enter Student Details:"
         << "\n";
    obj.readData();

    cout << "\nEnter Teacher Details:"
         << "\n";
    obj1.readData();

    cout << "\nStudent Details:"
         << "\n";
    obj.writeData();

    cout << "\nTeacher Details:"
         << "\n";
    obj1.writeData();
}