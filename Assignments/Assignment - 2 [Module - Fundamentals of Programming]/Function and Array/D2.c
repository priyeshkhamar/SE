// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>

main()
{
    int a[100], b[100], i, j, size, choice;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("Enter the numbers of the first array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the numbers of the second array:\n");
    for (j = 0; j < size; j++)
    {
        scanf("%d", &b[j]);
    }

    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nAddition = ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i] + b[i]);
        }
        printf("\n");
        break;

    case 2:
        printf("Subtraction = ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i] - b[i]);
        }
        printf("\n");
        break;

    case 3:
        printf("Multiplication = ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i] * b[i]);
        }
        printf("\n");
        break;

    case 4:
        printf("Division = ");
        for (i = 0; i < size; i++)
        {
            if (b[i] != 0)
            {
                printf("%d ", a[i] / b[i]);
            }
            else
            {
                printf("Error ");
            }
        }
        printf("\n");
        break;

    default:
        printf("Invalid Choice!\n");
    }
}
