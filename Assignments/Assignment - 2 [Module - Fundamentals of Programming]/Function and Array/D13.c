// WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include<stdio.h>

main()
{
    int numbers [5], i;
    
    for (i=0;i<5;i++)
    {
        printf("Enter numbers in array : ");
        scanf("%d",&numbers[i]);
    }

    for(i=0;i<5;i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("\n%d is Even Number.",numbers[i]);
        }

        else
        {
            printf("\n%d is Odd Number.",numbers[i]);
        }
    }
}