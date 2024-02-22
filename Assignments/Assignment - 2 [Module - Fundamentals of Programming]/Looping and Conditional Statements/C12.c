// Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>

main()
{
    int r, n, s = 0, org, res = 0;

    printf("Enter a Number : ");
    scanf("%d", &n);

    org = n;

    // Count the number of digits
    while (org != 0)
    {
        org /= 10;
        s++;
    }
    printf("Number of Digits : %d\n", s);

    org = n; // Reset org to the original value

    // Calculate the sum of cubes of digits
    while (org != 0)
    {
        r = org % 10;

        // Calculate power using a loop
        int temp = 1;
        for (int i = 1; i <= s; i++)
        {
            temp = temp * r;
        }

        res = res + temp;
        org = org / 10;
    }

    if (n == res)
    {
        printf("Armstrong Number!\n");
    }
    else
    {
        printf("Not Armstrong!\n");
    }
}
