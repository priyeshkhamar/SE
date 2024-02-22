// Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include <stdio.h>
#include <ctype.h> //for using built-in functions - islower, isupper, tolower, toupper

main()
{
    char a[1000];
    int i;

    printf("Enter a String: ");
    gets(a);

    // Go through each character in the sentence
    for (i = 0; a[i] != '\0'; i++)
    {
        if (islower(a[i]))
        {
            a[i] = toupper(a[i]); // Convert lowercase to uppercase
        }
        else if (isupper(a[i]))
        {
            a[i] = tolower(a[i]); // Convert uppercase to lowercase
        }
    }
    printf("\nModified Strinhg: %s", a);
}