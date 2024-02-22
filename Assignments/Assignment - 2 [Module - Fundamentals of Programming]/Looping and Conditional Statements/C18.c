// Write a C Program to Print the Multiplication Table of N

#include <stdio.h>

main()
{
    int i, n;

    printf("Enter the number to print its table : ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
}