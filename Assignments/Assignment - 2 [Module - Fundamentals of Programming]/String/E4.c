// Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <string.h>

main()
{
    char a[200];
    int count = 0, i;

    printf("Enter the string:\n");
    scanf("%[^\n]a", a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ' && a[i + 1] != ' ')
            count++;
    }

    printf("Number of words in given string are: %d\n", count + 1);
}