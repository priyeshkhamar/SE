// WAP to find number is even or odd using ternary operator

#include <stdio.h>

main()
{
    int number;

    printf("Enter a Number : ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is even number.\n", number) : printf("%d is odd number.\n", number);
}