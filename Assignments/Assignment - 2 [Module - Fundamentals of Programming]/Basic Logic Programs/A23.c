// WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>

main()
{
    int a, b;

    printf("Enter the First Number : ");
    scanf("%d", &a);

    printf("Enter the Second Number : ");
    scanf("%d", &b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("\n");
    printf("Numbers are Swapping :\n");
    printf("\n");

    printf("First Number : %d \n", a);
    printf("Second Number : %d", b);
}