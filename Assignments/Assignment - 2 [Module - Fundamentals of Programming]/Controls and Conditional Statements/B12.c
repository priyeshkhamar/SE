// WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

main() 
{
    int num1, num2, num3, max;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using ternary operator to find the maximum number
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The maximum number is: %d\n", max);
}
