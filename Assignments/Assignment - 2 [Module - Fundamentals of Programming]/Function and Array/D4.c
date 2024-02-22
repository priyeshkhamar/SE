// WAP to find factorial using recursion

#include <stdio.h>

void factorial(int n)
{

    int i, factorial = 1;

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
}
printf("The Factorial is : %d", factorial);
}
main()
{
    int n;

    printf("Enter the Number whose Factorial you want : ");
    scanf("%d", &n);

    factorial(n);
}