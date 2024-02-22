// Write a program in C to find the number of times a given word 'is' appears in the given string.

#include <stdio.h>

main()
{
    char a[100], word[] = "is";
    int count = 0, length;

    printf("Enter a String: ");
    gets(a);

    length = strlen(a);
    for (int i = 0; i < length - 1; i++)
    {
        // Check for 'is' at every position in the string
        if (a[i] == 'i' && a[i + 1] == 's')
        {
            count++;
        }
    }
    printf("\nNo. of times the word 'is' appears in the given string = %d", count);
}
