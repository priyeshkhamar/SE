// Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>

main()
{
    char a[100];
    int i, j;

    printf("Enter a String : ");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%c\t", a[j]);
    }
}