// Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>
#include <string.h>

main()
{
    char a[100];
    int i, alphabets = 0, numbers = 0, special = 0;

    printf("Enter a String : ");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            numbers++;
        }
        else
        {
            special++;
        }
    }

    printf("\nNumber of Alphabets : %d", alphabets);
    printf("\nNumber of Numbers : %d", numbers);
    printf("\nNumber of Special Characters : %d", special);
}