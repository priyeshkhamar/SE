// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>

void ascending(int arr[4])
{
    int i, j, temp;
    for (i = 0; i < 4 - 1; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void descending(int arr[4])
{
    int i, j, temp;
    for (i = 0; i < 4 - 1; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

main()
{
    int a[4], b[4], i, j, option;

    for (i = 0; i < 4; i++)
    {
        printf("Enter Numbers of First Array : ");
        scanf("%d", &a[i]);
    }

    for (j = 0; j < 4; j++)
    {
        printf("Enter Numbers of Second Array : ");
        scanf("%d", &b[j]);
    }

    printf("\nMenu :");
    printf("\n1. Ascending Order : ");
    printf("\n2. Descending Order");
    printf("\nSelect Option : ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        ascending(a);
        ascending(b);

        printf("\nAscending Order for Array A: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\nAscending Order for Array B: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d ", b[i]);
        }
        break;

    case 2:
        descending(a);
        descending(b);

        printf("\nDescending Order for Array A: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\nDescending Order for Array B: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d ", b[i]);
        }
        break;

    default:
        printf("Invalid Choice!\n");
        break;
    }
}