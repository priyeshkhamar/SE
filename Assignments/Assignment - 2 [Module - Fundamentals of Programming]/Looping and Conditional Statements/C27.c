// 1 / 2 - 2 / 3 + 3 / 4 - 4 / 5 + 5 / 6 ..........n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i, numerator = 1, denominator = 2, sign = 1; // 1 for addition, -1 for subtraction

    for (i = 1; i <= n; i++)
    {
        if (i == n)
        {
            // Print the last fraction number without the symbol
            printf("%d/%d", numerator, denominator);
        }
        else
        {
            if (sign == 1)
            {
                printf("%d/%d + ", numerator, denominator);
            }
            else
            {
                printf("%d/%d - ", numerator, denominator);
            }
        }

        numerator = numerator + 1;
        denominator = denominator + 1;
        sign = -sign; // change sign for the next fraction number
    }

    printf("\n");
}
