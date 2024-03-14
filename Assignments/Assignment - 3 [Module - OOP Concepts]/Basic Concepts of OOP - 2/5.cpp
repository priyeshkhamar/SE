// Write a C++ program to create a class called Rectangle that has private
// member variables for length and width. Implement member functions to
// calculate the rectangle's area and perimeter.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float width, length;

public:
    float area, perimeter;
    // Function to calculate the area and perimeter directly
    void calculate(float w, float l)
    {
        width = w;
        length = l;

        area = (w * l);
        perimeter = 2*(l+w);
;    }
};

main()
{
    Rectangle obj;

    float w, l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    cout << "Enter the length of the rectangle: ";
    cin >> l;

    // Calculate the area and circumference
    obj.calculate(w,l);

    // Display the results
    cout << "Area of the Rectangle: " << obj.area << " cm^2 \n";
    cout << "Perimeter of the Rectangle: " << obj.perimeter << " cm \n";

    return 0;
}