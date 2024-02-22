// WAP to take 10 no.Input from user find out below values
//     a.How many Even numbers are there
//         b.How many odd numbers are there
//             c.Sum of even numbers
//                 d.Sum of odd numbers

#include <stdio.h>
main()
{
    int n, i, count1 = 0, count2 = 0, sumOdd = 0, sumEven = 0;
    printf("Enter any Number :");
    scanf("%d", &n);

    // take input form user and check  whether it is even or odd
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
            count1++;
            sumEven += i;
        }
        else
        {
            printf("%d is odd\n", i);
            count2++;
            sumOdd += i;
        }
    }
    printf("\nTotal Even numbers: %d", count1);
    printf("\nTotal Odd numbers: %d", count2);
    printf("\nSum of even numbers: %d", sumEven);
    printf("\nSum of odd numbers: %d", sumOdd);
}