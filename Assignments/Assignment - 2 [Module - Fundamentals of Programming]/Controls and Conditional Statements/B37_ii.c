#include <stdio.h>

main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check and display whether the character is a vowel or consonant
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("It is a Vowel\n");
        break;
    default:
        printf("It is a Consonant\n");
    }
}
