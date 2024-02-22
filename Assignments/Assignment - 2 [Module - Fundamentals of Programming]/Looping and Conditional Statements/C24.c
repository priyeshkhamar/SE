// Series Program : 24. 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

main()
{
    int i, n, sum = 0;

    printf("Enter the limit of the series : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of the series 1 + 2 + 3 + . . . . . + %d = %d", n, sum);
}