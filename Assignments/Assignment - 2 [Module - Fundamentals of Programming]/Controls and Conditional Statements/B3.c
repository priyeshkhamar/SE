// WAP to check if the given year is a leap year or not.

#include <stdio.h>

main()
{
    int year;

    printf("Enter a year to check : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a Leap year!", year);
    }
    else
    {
        printf("%d is not a Leap year!", year);
    }
}