// calculate the Factorial of a Given Number using while loop

#include <stdio.h>

main()
{
    int i = 1, n, factorial = 1;

    printf("Enter a number whose factorial you want : ");
    scanf("%d", &n);

    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("Factorial of %d = %d", n, factorial);
}