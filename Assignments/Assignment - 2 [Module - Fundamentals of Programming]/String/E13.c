// Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>

main()
{
    char a[1000];
    char b[1000];
    int i, j;

    // Input
    printf("Enter a String: ");
    gets(a);

    for (i = 0, j = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            b[j++] = a[i];
        }
    }

    b[j] = '\0';

    // Output
    printf("String with only alphabets: %s\n", b);
}
