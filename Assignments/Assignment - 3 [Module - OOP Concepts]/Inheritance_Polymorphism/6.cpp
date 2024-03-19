// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

// Base class
class Base
{
private:
    int privateMember;

protected:
    int protectedMember;

public:
    int publicMember;

    // Constructor
    Base() : privateMember(1), protectedMember(2), publicMember(3) {}

    void display()
    {
        cout << "Base Class:\n";
        cout << "Private Member: " << privateMember << "\n";
        cout << "Protected Member: " << protectedMember << "\n";
        cout << "Public Member: " << publicMember << "\n";
    }
};

// Derived class
class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived Class:\n";
        // privateMember is not accessible in derived class
        // cout << "Private Member: " << privateMember << "\n";
        cout << "Protected Member: " << protectedMember << "\n";
        cout << "Public Member: " << publicMember << "\n";
    }
};

int main()
{
    Derived derivedObj;
    cout << "Accessing Base Class members from Derived Class:\n";
    derivedObj.display();
}
