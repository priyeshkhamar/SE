// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculation
    printf("First three powers of %d are:\n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);
}
