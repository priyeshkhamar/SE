// Calculate sum of 10 numbers using of while loop

#include <stdio.h>

main()
{
    int sum = 0, i = 1, n;

    // Input and calculate sum using a while loop
    while (i <= 10)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        sum = sum + n;
        i++;
    }
    printf("The sum of the 10 numbers = %d\n", sum);
}