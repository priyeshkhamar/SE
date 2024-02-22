// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

main()
{
    char a[100];
    int maxLength = 0;

    printf("Enter a string: ");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        maxLength++;
    }

    printf("Maximum number of characters in the string: %d\n", maxLength);
}
