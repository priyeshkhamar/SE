// Write a program in C to combine two strings manually

#include <stdio.h>

main()
{
    char a[100], b[100];
    int i, j;

    printf("Enter String A : ");
    gets(a);

    printf("Enter String B : ");
    gets(b);

    for (i = 0; a[i] != '\0'; i++)
    {
    }
    for (j = 0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }
    printf("Concatenated String : %s", a);
}
