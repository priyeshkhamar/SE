// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string.h>
using namespace std;

class String
{
public:
    char str[20];

public:
    void acceptString()
    {
        cout << "\n Enter a String : ";
        cin >> str;
    }
    void displayString()
    {
        cout << str;
    }
    String operator+(String x) // Concatenating String
    {
        String s;
        strcat(str, x.str);
        strcpy(s.str, str);
        return s;
    }
};
int main()
{
    String str1, str2, str3;

    str1.acceptString();
    str2.acceptString();

    cout << "\n\n First String is : ";
    str1.displayString();

    cout << "\n\n Second String is : ";
    str2.displayString();

    str3 = str1 + str2; // String is concatenated. Overloaded '+' operator
    cout << "\n\n Concatenated String is : ";
    str3.displayString();
}
