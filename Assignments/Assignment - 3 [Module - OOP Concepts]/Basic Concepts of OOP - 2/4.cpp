// Write a C++ program to implement a class called Circle that has private
// member variables for radius. Include member functions to calculate the
// circle's area and circumference.

#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    float area, circum;

    // Function to calculate the area and circumference directly
    void calculate(float r)
    {
        radius = r;
        area = 3.14 * radius * radius;
        circum = 2 * 3.14 * radius;
    }
};

int main()
{
    Circle obj;

    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    // Calculate the area and circumference
    obj.calculate(r);

    // Display the results
    cout << "Area of the circle: " << obj.area << " cm^2 \n";
    cout << "Circumference of the circle: " << obj.circum << " cm \n";

    return 0;
}
