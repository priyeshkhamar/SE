// C Program to Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h>

main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check the type of character
    if ((ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an Uppercase Letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a Lowercase Letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a Digit.\n", ch);
    }
    else
    {
        printf("%c is a Special Character.\n", ch);
    }
}
