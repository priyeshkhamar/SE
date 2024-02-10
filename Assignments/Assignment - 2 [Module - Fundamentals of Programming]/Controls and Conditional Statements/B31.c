// Write a program in C to read any Month Number in integer and display the number of days for this month.

#include <stdio.h>

main() {
    int monthNumber;

    printf("Enter Month Number (1-12): ");
    scanf("%d", &monthNumber);

    // Check for valid month number
    if (monthNumber >= 1 && monthNumber <= 12) 
    {
        // Check for months with 31 days
        if (monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12) 
        {
            printf("Number of days: 31\n");
        }
        // Check for months with 30 days
        else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11) 
        {
            printf("Number of days: 30\n");
        }
        // Check for February
        else 
        {
            printf("Number of days: 28 or 29 (leap year)\n");
        }
    } 
    else 
    {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }
}
