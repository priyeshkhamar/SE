#include <stdio.h>

int reverseNumber(int n)
{
    int r = 0, digit;

    while (n > 0)
    {
        digit = n % 10;
        r = r * 10 + digit;
        n = n / 10;
    }

    return r;
}

int main()
{
    int n1, n2, n3, rn1, rn2, rn3;

    printf("Enter the first number : ");
    scanf("%d", &n1);

    printf("Enter the second number : ");
    scanf("%d", &n2);

    printf("Enter the third number : ");
    scanf("%d", &n3);

    rn1 = reverseNumber(n1);
    rn2 = reverseNumber(n2);
    rn3 = reverseNumber(n3);

    if (n1 == rn1)
    {
        printf("\n%d is a Palindrome Number!", n1);
    }
    else
    {
        printf("\n%d is not Palindrome Number", n1);
    }

    if (n2 == rn2)
    {
        printf("\n%d is a Palindrome Number!", n2);
    }
    else
    {
        printf("\n%d is not Palindrome Number", n2);
    }

    if (n3 == rn3)
    {
        printf("\n%d is a Palindrome Number!", n3);
    }
    else
    {
        printf("\n%d is not Palindrome Number", n3);
    }
}
