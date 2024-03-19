// Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include <iostream>
using namespace std;

// Function to add two numbers
int calculate(int a, int b)
{
    return a + b;
}

// Function to subtract two numbers
int calculate(int a, int b, char operation)
{
    if (operation == '-')
        return a - b;
    else
    {
        cout << "Invalid operation"
             << "\n";
        return 0;
    }
}

// Function to multiply two numbers
int calculate(int a, int b, bool flag)
{
    if (flag)
        return a * b;
    else
    {
        cout << "Invalid operation"
             << "\n";
        return 0;
    }
}

// Function to divide two numbers
double calculate(double a, double b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "Invalid operation"
             << "\n";
        return 0.0;
    }
}

int main()
{
    int num1 = 10, num2 = 5;
    double doubleNum1 = 10.5, doubleNum2 = 5.5;

    cout << "Calculator Demonstarting Function Overloading";

    // Addition
    cout << "Addition: " << calculate(num1, num2) << "\n";

    // Subtraction
    cout << "Subtraction: " << calculate(num1, num2, '-') << "\n";

    // Multiplication
    cout << "Multiplication: " << calculate(num1, num2, true) << "\n";

    // Division
    cout << "Division: " << calculate(doubleNum1, doubleNum2) << "\n";
}