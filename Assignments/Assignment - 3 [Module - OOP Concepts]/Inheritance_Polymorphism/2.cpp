// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Shape
{
protected:
    double width;
    double height;

public:
    void setWidth(double w)
    {
        width = w;
    }

    void setHeight(double h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    double area()
    {
        return width * height;
    }
};

int main()
{
    Rectangle obj;

    double width, height;

    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Enter height of the rectangle: ";
    cin >> height;

    obj.setWidth(width);
    obj.setHeight(height);

    cout << "Area of the rectangle: " << obj.area() << "\n";
}
