// Write a program of to sort the array using templates

#include <iostream>
using namespace std;

template <class T>
void sort(T arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int int_array[5];
    float float_array[5];
    cout << "Enter 5 Integer array elements :"
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> int_array[i];
    }
    cout << "Enter 5 Float array elements :"
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> float_array[i];
    }
    sort(int_array, 5);
    sort(float_array, 5);
    cout << "Array of Integers after Sorting : "
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << int_array[i] << ", ";
    }
    cout << "\n";
    cout << "Array of Floats after Sorting : "
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << float_array[i] << ", ";
    }
}
