// Write a program to find out the max number from given array using function

#include <stdio.h>

 maxNum(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int a[100], i, max, n;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter %d numbers : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = maxNum(a, n);

    printf("The maximum number from the given array is : %d", max);
}
