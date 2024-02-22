// Write a program to find out the max from given number(E.g., No : -1562 Max number is 6)

#include <stdio.h>

main()
{
    int n, i, highest = 0, digit;

    printf("Enter a Number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        if (digit >= highest)
        {
            highest = digit;
        }
        n = n / 10;
    }

    if (highest >= 0)
    {
        printf("The highest digit is %d", highest);
    }
    else
    {
        printf("Invalid Entry!");
    }
}