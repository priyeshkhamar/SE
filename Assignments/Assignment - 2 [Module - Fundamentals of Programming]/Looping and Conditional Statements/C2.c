// WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

main()
{
    int num;

    printf("Enter 5 numbers:\n");
    for (int i = 1; i <= 5; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
    }

    // Display the entered numbers
    printf("Entered numbers are: ");
    for (int i = 1; i <= 5; ++i)
    {
        printf("%d ", i);
    }
    printf("\n");
}
