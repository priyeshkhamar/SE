// Write program of to swap the two values using template

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout << "Let us check for Integers!\n";
    int x, y;
    cout << "Enter the value of Number 1 : ";
    cin >> x;
    cout << "Enter the value of Number 2 : ";
    cin >> y;

    cout << "Before swapping: Number 1  = " << x << ", Number 2 = " << y << "\n";
    swapValues(x, y);
    cout << "After swapping: Number 1 = " << x << ", Number 2 = " << y << "\n\n";

    cout << "Let us check for Float!";
    float a, b;
    cout << "\nEnter the value of Number 1 : ";
    cin >> a;
    cout << "Enter the value of Number 2 : ";
    cin >> b;

    cout << "Before swapping: Number 1  = " << a << ", Number 2 = " << b << "\n";
    swapValues(a, b);
    cout << "After swapping: Number 1 = " << a << ", Number 2 = " << b << "\n";
}
