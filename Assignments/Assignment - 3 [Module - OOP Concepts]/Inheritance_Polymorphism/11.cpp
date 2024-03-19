#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double radius)
{
    const double pi = 3.14;
    return pi * radius * radius;
}

double calculateArea(double length, double breadth)
{
    return length * breadth;
}

double calculateArea(double base, double height, bool isTriangle)
{
    if (isTriangle)
        return 0.5 * base * height;
    else
    {
        cout << "Invalid input!"
             << "\n";
        return 0.0;
    }
}

int main()
{
    double radius, length, breadth, base, height;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << "\n";
    cout << "\n";
    
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter breadth of the rectangle: ";
    cin >> breadth;
    cout << "Area of the rectangle: " << calculateArea(length, breadth) << "\n";
    cout << "\n";

    cout << "Enter base of the triangle: ";
    cin >> base;
    cout << "Enter height of the triangle: ";
    cin >> height;
    cout << "Area of the triangle: " << calculateArea(base, height, true) << "\n";
}
