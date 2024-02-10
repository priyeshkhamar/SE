// WAP to find the largest of three numbers.

#include <stdio.h>

main()
{
    int num1, num2, num3, largest;

    printf("Enter three numbers : \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the largest.", num1);
        }

        else
        {
            printf("%d is the largest.", num3);
        }
    }

    else
    {
        if (num2 > num3)
        {
            printf("%d is largest.", num2);
        }
        else
        {
            printf("%d is the largest.", num3);
        }
    }
}