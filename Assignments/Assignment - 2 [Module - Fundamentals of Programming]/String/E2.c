// Write a program in C to separate individual characters from a string.

#include <stdio.h>
#include <string.h>

main()
{
    char a[100];
    int i;

    printf("Enter a String : ");
    gets(a);

    printf("Individual Characters from the String : \n");
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c\t", a[i]);
    }
}