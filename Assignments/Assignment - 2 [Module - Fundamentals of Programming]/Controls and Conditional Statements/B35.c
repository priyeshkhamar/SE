// Accept the input month number and print number of days in that month.

#include <stdio.h>

main()
{
    int monthNumber;

    printf("Enter Month Number (1-12): ");
    scanf("%d", &monthNumber);

    // Check for valid month number
    if (monthNumber >= 1 && monthNumber <= 12)
    {
        // Get the number of days in the month
        switch (monthNumber)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days: 31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days: 30\n");
            break;
        case 2:
            printf("Number of days: 28 or 29 (leap year)\n");
            break;
        }
    }
    else
    {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }
}
