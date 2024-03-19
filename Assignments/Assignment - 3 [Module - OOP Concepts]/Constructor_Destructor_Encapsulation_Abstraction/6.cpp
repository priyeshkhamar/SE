// Write  C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string empName, int empID, double empSalary)
    {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    void setSalary(double performanceScore)
    {
        salary = salary * (1 + performanceScore * 0.1); // 10% raise for each point increase in performance score
    }

    string getName()
    {
        return name;
    }

    int getEmployeeID()
    {
        return employeeID;
    }

    double getSalary()
    {
        return salary;
    }
};

void main()
{
    string name;
    int employeeID;
    double salary;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee ID: ";
    cin >> employeeID;

    cout << "Enter employee salary: $";
    cin >> salary;

    Employee emp1(name, employeeID, salary);

    cout << "\nInitial Employee Details:\n";
    cout << "Employee Name: " << emp1.getName() << endl;
    cout << "Employee ID: " << emp1.getEmployeeID() << endl;
    cout << "Employee Salary: Rs." << emp1.getSalary() << endl;

    double performanceScore;
    cout << "\nEnter performance score (0-1): ";
    cin >> performanceScore;
    emp1.setSalary(performanceScore);

    cout << "\nAfter Performance Appraisal:\n";
    cout << "Employee Name: " << emp1.getName() << endl;
    cout << "Employee ID: " << emp1.getEmployeeID() << endl;
    cout << "Employee Salary: $" << emp1.getSalary() << endl;
}