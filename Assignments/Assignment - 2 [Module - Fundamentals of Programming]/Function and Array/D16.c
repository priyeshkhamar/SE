// Accept 5 numbers from user and perform sum of array

#include <stdio.h>

main()
{
    int numbers[5], i, sum = 0;

    printf("Enter 5 Numbers of the Array : \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    printf("Sum of Numbers : %d", sum);
}