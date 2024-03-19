// Write a C++ program to create a class called Triangle that has private
// member variables for the lengths of its three sides. Implement member
// functions to determine if the triangle is equilateral, isosceles, or scalene

#include <iostream>
using namespace std;

class Triangle
{
private:
    double side1, side2, side3;

public:
    // Function to set the lengths of the sides by taking user input
    void setSides()
    {
        cout << "Enter the length of side 1: ";
        cin >> side1;
        cout << "Enter the length of side 2: ";
        cin >> side2;
        cout << "Enter the length of side 3: ";
        cin >> side3;
    }

    // Function to determine if the triangle is equilateral
    bool isEquilateral()
    {
        return (side1 == side2 && side2 == side3);
    }

    // Function to determine if the triangle is isosceles
    bool isIsosceles()
    {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    // Function to determine if the triangle is scalene
    bool isScalene()
    {
        return (!isEquilateral() && !isIsosceles());
    }
};

int main()
{
    Triangle triangle;

    // Set the lengths of the sides by taking user input
    triangle.setSides();

    // Check the type of triangle
    if (triangle.isEquilateral())
    {
        cout << "The triangle is equilateral."
             << "\n";
    }
    else if (triangle.isIsosceles())
    {
        cout << "The triangle is isosceles."
             << "\n";
    }
    else if (triangle.isScalene())
    {
        cout << "The triangle is scalene."
             << "\n";
    }

    return 0;
}
