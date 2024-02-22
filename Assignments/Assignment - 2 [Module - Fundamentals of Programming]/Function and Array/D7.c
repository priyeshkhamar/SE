// WAP Find out length of string without using inbuilt function

#include <stdio.h>

length(int i, char a[100])
{
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    printf("Length of the String is %d", i);
}
main()
{
    char a[100];
    int i;

    printf("Enter a string : ");
    gets(a);

    length(i, a);
}