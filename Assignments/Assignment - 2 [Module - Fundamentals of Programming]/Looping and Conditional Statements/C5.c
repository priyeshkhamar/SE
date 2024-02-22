// WAP to print factorial of given number

#include <stdio.h>

main()
{
    int n, factorial = 1, i;

    printf("Enter a Number whose factorial you want to find : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is : %d", n, factorial);
}