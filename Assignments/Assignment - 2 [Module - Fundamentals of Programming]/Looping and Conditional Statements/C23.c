// C Program to Reverse a Number Using FOR Loop

#include <stdio.h>

main()
{
    int i, n, digit, reverse = 0;

    printf("Enter a Number to Reverse : ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid Number!");
    }

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("Reversed Number = %d", reverse);
}