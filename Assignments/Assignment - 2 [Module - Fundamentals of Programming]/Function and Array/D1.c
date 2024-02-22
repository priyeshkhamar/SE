// Write a program to find out the max number from given array using function

#include <stdio.h>

main()
{
    int a[100], i, max, n;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter %d numbers : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];

    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("The maximum number from the given array is : %d", max);
}