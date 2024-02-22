// WAP to find reverse of string using recursion 

#include<stdio.h>

main()
{
    int i, len, end, temp;
    char a[100];

    printf("Enter a string to reverse : ");
    gets(a);

    len = strlen(a);

    end = len - 1;

    for (i=0;i<=end;i++)
    {
        temp = a[i];
        a[i] = a[end];
        a[end] = temp;
        end--;
    }
    printf("The reversed string is : %s",a);
}