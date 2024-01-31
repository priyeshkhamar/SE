// Accept 2 numbers from user and swap 2 numbers without using 3rd variable

#include <stdio.h>

main()
{
    int a, b;

    printf("Enter the First Number : ");
    scanf("%d", &a);

    printf("Enter the Second Number : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n");
    printf("Numbers are Swapping :\n");
    printf("\n");

    printf("First Number : %d \n", a);
    printf("Second Number : %d", b);
}