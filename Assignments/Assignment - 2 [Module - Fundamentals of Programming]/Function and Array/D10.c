// WAP to perform Palindrome number using for loop and function

#include <stdio.h>

palindrome(int n)
{
    int i, original = n, reverse = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    if (original == reverse)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
}

main()
{
    int n;

    printf("Enter a number to check : ");
    scanf("%d", &n);

    palindrome(n);
}