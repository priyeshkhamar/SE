// Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

main()
{
    char a[100], b[100];

    printf("Enter String A : ");
    gets(a);

    printf("Enter String B : ");
    gets(b);

    strcpy(a, b); // to copy string b to a

    printf("\nString A : %s", a);
    printf("\nString B : %s", b);
}