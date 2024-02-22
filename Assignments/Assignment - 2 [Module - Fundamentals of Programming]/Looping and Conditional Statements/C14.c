// Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

main()
{
    int numbers[5];
    int factorials[5];

    printf("Enter five numbers:\n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &numbers[i]);
    }

    // Calculate and print factorials
    for (int i = 0; i < 5; ++i)
    {
        int factorial = 1;
        for (int j = 2; j <= numbers[i]; ++j)
        {
            factorial = factorial * j;
        }
        factorials[i] = factorial;
        printf("%d! = %d\n", numbers[i], factorials[i]);
    }
}
