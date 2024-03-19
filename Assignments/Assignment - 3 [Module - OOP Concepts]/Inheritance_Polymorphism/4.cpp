// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <string>

using namespace std;

class PersonalInfo
{
protected:
    string name;
    int age;

public:
    void inputPersonalInfo()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonalInfo()
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Marks
{
protected:
    int maths;
    int science;
    int english;

public:
    void inputMarks()
    {
        cout << "Enter Marks in Maths: ";
        cin >> maths;
        cout << "Enter Marks in Science: ";
        cin >> science;
        cout << "Enter Marks in English: ";
        cin >> english;
    }

    void displayMarks()
    {
        cout << "Maths: " << maths << "\n";
        cout << "Science: " << science << "\n";
        cout << "English: " << english << "\n";
    }
};

class StudentMarkSheet : public PersonalInfo, public Marks
{
public:
    void inputData()
    {
        inputPersonalInfo();
        inputMarks();
    }

    void displayMarkSheet()
    {
        cout << "\nStudent Mark Sheet:"
             << "\n";
        displayPersonalInfo();
        displayMarks();
    }
};

int main()
{
    StudentMarkSheet obj;

    cout << "Enter Student Details:"
         << "\n";
    obj.inputData();

    obj.displayMarkSheet();
}
