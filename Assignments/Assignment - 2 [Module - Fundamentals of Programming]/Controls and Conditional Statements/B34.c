// Accept month number and display month name

#include <stdio.h>

main()
{
    int monthNumber;

    printf("Enter Month Number (1-12): ");
    scanf("%d", &monthNumber);

    // Check for valid month number
    if (monthNumber >= 1 && monthNumber <= 12)
    {
        // Get the month name
        switch (monthNumber)
        {
        case 1:
            printf("Month: January\n");
            break;
        case 2:
            printf("Month: February\n");
            break;
        case 3:
            printf("Month: March\n");
            break;
        case 4:
            printf("Month: April\n");
            break;
        case 5:
            printf("Month: May\n");
            break;
        case 6:
            printf("Month: June\n");
            break;
        case 7:
            printf("Month: July\n");
            break;
        case 8:
            printf("Month: August\n");
            break;
        case 9:
            printf("Month: September\n");
            break;
        case 10:
            printf("Month: October\n");
            break;
        case 11:
            printf("Month: November\n");
            break;
        case 12:
            printf("Month: December\n");
            break;
        }
    }
    else
    {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }
}
