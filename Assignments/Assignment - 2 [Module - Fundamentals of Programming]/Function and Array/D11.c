// WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>

main()
{
    int arr[100], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter numbers in array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing the reverse of the array
    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}