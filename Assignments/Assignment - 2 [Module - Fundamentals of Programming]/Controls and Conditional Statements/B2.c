// Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0

#include <stdio.h>

main() 
{
    int m, n;

    printf("Enter a number (m): ");
    scanf("%d", &m);

    //Value of n based on m
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }

    printf("The value of n is: %d\n", n);
}
