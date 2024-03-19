// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
#include <string>

using namespace std;

class Students
{
protected:
    int rollNumber;

public:
    void inputRollNumber()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayRollNumber()
    {
        cout << "Roll Number: " << rollNumber << "\n";
    }
};

class Test : public Students
{
protected:
    int subject1;
    int subject2;

public:
    void inputTestMarks()
    {
        cout << "Enter Marks for subject 1: ";
        cin >> subject1;
        cout << "Enter Marks for subject 2: ";
        cin >> subject2;
    }

    void displayTestMarks()
    {
        cout << "Marks for Subject 1: " << subject1 << "\n";
        cout << "Marks for Subject 2: " << subject2 << "\n";
    }
};

class Result : public Test
{
protected:
    int totalMarks;

public:
    void calculateTotalMarks()
    {
        totalMarks = subject1 + subject2;
    }

    void displayTotalMarks()
    {
        cout << "Total Marks: " << totalMarks << "\n";
    }
};

int main()
{
    Result obj;

    cout << "Enter Student Details:" << "\n";
    obj.inputRollNumber();
    obj.inputTestMarks();

    obj.calculateTotalMarks();

    cout << "\nStudent Result:" << "\n";
    obj.displayRollNumber();
    obj.displayTestMarks();
    obj.displayTotalMarks();
}
