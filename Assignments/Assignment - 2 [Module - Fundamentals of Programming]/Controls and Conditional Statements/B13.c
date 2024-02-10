// WAP to find minimum number among 3 numbers using ternary operator

#include <stdio.h>

main() {
    int num1, num2, num3, min;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using ternary operator to find the minimum number
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    printf("The minimum number is: %d\n", min);
}
