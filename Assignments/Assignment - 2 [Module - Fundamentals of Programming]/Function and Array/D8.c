// WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>

main()
{
    char a[100];
    int i, length;
    int isPalindrome = 1;
    printf("Enter a String: ");
    gets(a);

    length = strlen(a);

    // Reverse string
    for (i = 0; i < length / 2; i++)
    {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }

    // Check if the reversed string is equal to the original string
    for (i = 0; i < length; i++)
    {
        if (a[i] != a[length - i - 1])
        {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
    {
        printf("The string is palindrome.\n");
    }
    else
    {
        printf("The string is not palindrome.\n");
    }
}
