// Write a program in C to compare two strings without using string library functions.

#include <stdio.h>
#include <string.h>

main()
{
    char string1[100], string2[100];
    int i, temp = 1;

    printf("Enter String 1 : ");
    gets(string1);

    printf("Enter String 2 : ");
    gets(string2);

    for (i = 0; string1[i] != '\0' && string2[i] != '\0'; i++)
    {
        if (string1[i] != string2[i])
        {
            temp = 0;
            break;
        }
    }

    if (string1[i] == '\0' && string2[i] == '\0' && temp == 1)
    {
        printf("Both the strings are same.\n");
    }
    else
    {
        printf("Both the strings are not same.\n");
    }
}