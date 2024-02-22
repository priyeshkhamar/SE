// 1 2 3 6 9 18 27 54...

#include <stdio.h>

main()
{
    int i, n, current = 1;

    printf("Enter the limit for the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d", current);

        if (i % 2 == 1)
        {
            // Multiply even indexes by 2
            current = current * 2;
        }
        else
        {
            // Multiply odd indexes by 3
            current = current * 3;
        }

        // Separate terms by commas (except for the last term)
        if (i < n)
        {
            printf(", ");
        }
    }

    printf("\n");
}