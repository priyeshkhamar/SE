// WAP to print table up to given numbers

#include <stdio.h>

main()
{
    int n, limit;

    // Input a number from the user
    printf("Enter a number whose table you want : ");
    scanf("%d", &n);

    printf("Enter the limit for the table: ");
    scanf("%d", &limit);

    // Print multiplication table
    printf("Multiplication table for %d up to %d:\n", n, limit);
    for (int i = 1; i <= limit; ++i)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
