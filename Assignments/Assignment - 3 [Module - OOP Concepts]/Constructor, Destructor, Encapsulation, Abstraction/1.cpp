// Write a program to find the multiplication values and the cubic values using
// inline function

#include <iostream>
using namespace std;

// Inline function to calculate multiplication
inline int multiply(int a, int b)
{
    return a * b;
}

// Inline function to calculate cubic value
inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    int num1, num2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate and display multiplication value
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << "\n";

    cout << "\n\n";

    // Input a number
    cout << "Enter a number to find its cubic value: ";
    cin >> num1;

    // Calculate and display cubic value
    cout << "Cubic value of " << num1 << " is: " << cube(num1) << "\n";

    return 0;
}
