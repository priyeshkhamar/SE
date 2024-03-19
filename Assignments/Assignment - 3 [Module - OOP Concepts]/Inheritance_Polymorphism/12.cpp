// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std;

class Class1
{
private:
    int a, b;

public:
    // get the data from the user
    void getData()
    {
        cout << "Enter Number 1 : ";
        cin >> a;
        cout << "Enter Number 2 : ";
        cin >> b;
    }
    // print the number on the screen
    void display()
    {
        cout << "a = " << a << " b = " << b << "\n";
    }
    // friend function
    friend void swap_number(Class1 &s);
};

// swap the number
void swap_number(Class1 &s)
{
    int temp;
    /* accessing private members from the friend function */
    temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main()
{

    Class1 obj;

    obj.getData();
    cout << "Before swapping"
         << "\n";
    obj.display();

    swap_number(obj);
    cout << "After swapping"
         << "\n";
    obj.display();
}
