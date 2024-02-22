// Write a program make a summation of given number(E.g., 1523 Ans : -11)

#include <stdio.h>

main()
{
    int n, digit, sum = 0;

    printf("Enter a Number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("The sum of digits is : %d", sum);
}