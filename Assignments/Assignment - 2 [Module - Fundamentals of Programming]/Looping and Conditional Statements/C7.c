// WAP to print number in reverse order e.g. : number = 64728 --->reverse = 82746

#include <stdio.h>

main()
{
    int n, reverse = 0, remainder;

    printf("Enter a Number : ");
    scanf("%d", &n);

    // Logic to reverse a number
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("The reversed number is : %d", reverse);
}