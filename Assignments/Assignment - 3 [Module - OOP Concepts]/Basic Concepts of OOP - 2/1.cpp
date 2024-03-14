// WAP to create simple calculator using class

#include <iostream>
using namespace std;

class Calculator
{
public:
    void simpCalc()
    {
        int num1, num2, result, choice;

        cout << "~~~~~~~~~~~~~~~CALCULATOR~~~~~~~~~~~~~~~~~~~";
        cout << "\nEnter the First Number : ";
        cin >> num1;
        cout << "\nEnter the Second Number : ";
        cin >> num2;

        cout << "\nMenu : ";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Modulo";
        cout << "\nEnter your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            cout << "Addition : " << result;
            break;

        case 2:
            result = num1 - num2;
            cout << "Subtraction : " << result;
            break;

        case 3:
            result = num1 * num2;
            cout << "Multiplication : " << result;
            break;

        case 4:
            result = num1 / num2;
            cout << "Division : " << result;
            break;

        case 5:
            result = num1 % num2;
            cout << "Modulo : " << result;
            break;

        default:
            cout << "\nInvalid Choice";
            break;
        }
    }
};

main()
{
    Calculator obj;
    obj.simpCalc();
}