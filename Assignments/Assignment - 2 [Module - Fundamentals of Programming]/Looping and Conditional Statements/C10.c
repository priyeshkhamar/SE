// Write a program you have to make a summation of first and last Digit.(E.g., 1234 Ans : 5)

#include <stdio.h>

main()
{
    int n, first, last, sum;

    printf("Enter a Number : ");
    scanf("%d", &n);

    last = n % 10;

    while (n != 0)
    {
        first = n % 10;
        n = n / 10;
    }
    sum = first + last;

    printf("The sum of First and Last digit is : %d", sum);
}