// WAP to print Fibonacci series up to given numbers

#include <stdio.h>

main()
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms to print in Fibonacci Series : ");
    scanf("%d", &n);

    printf("Fibonacci Series : \n");
    for (i = 0; i < n; i++)
    {

        printf("%d \n", first);

        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}