// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>

main()
{
    int a[3][3], b[3][3], i, j, choice;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the numbers of first array : ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the numbers of second array : ");
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nMenu : ");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", a[i][j] + b[i][j]);
            }
            printf("\n");
        }
        break;

    case 2:
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("\%d ", a[i][j] - b[i][j]);
            }
            printf("\n");
        }
        break;

    case 3:
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", a[i][j] * b[i][j]);
            }
            printf("\n");
        }
        break;
    }
}