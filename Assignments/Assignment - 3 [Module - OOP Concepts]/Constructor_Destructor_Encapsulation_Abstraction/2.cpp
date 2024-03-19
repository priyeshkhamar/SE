// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class Calculator
{
private:
    float num1, num2;

public:
    // Constructor to display a welcome message
    Calculator()
    {
        cout << "Welcome to the Calculator Program!"
             << "\n";
    }

    // Constructor to initialize num1 and num2
    Calculator(float n1, float n2)
    {
        num1 = n1;
        num2 = n2;
    }

    // Function to perform addition
    float add()
    {
        return num1 + num2;
    }

    // Function to perform subtraction
    float subtract()
    {
        return num1 - num2;
    }

    // Function to perform division
    float divide()
    {
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            cout << "Error: Division by zero!"
                 << "\n";
            return 0;
        }
    }

    // Function to perform multiplication
    float multiply()
    {
        return num1 * num2;
    }

    // Destructor to display a thank you message
    ~Calculator()
    {
        cout << "Thank you for using the Calculator Program!"
             << "\n";
    }
};

int main()
{
    float num1, num2;

    // Display welcome message
    Calculator obj1;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Calculator obj(num1, num2);

    cout << "Addition : " << obj.add() << "\n";
    cout << "Subtraction : " << obj.subtract() << "\n";
    cout << "Division : " << obj.divide() << "\n";
    cout << "Multiplication : " << obj.multiply() << "\n";
}