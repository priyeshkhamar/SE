// Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

main()
{
    int n, sum = 0, i = 1;

    // Input the limit from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of natural numbers using a while loop
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
}
