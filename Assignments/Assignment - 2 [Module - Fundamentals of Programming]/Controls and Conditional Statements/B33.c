// WAP to input the week number and print week day.

#include <stdio.h>

main() 
{
    int weekNumber;

    printf("Enter Week Number (1-7): ");
    scanf("%d", &weekNumber);

    // Check for valid week number
    if (weekNumber >= 1 && weekNumber <= 7) 
    {
        // Get the day of the week
        switch (weekNumber) 
        {
            case 1:
                printf("Day of the week: Sunday\n");
                break;
            case 2:
                printf("Day of the week: Monday\n");
                break;
            case 3:
                printf("Day of the week: Tuesday\n");
                break;
            case 4:
                printf("Day of the week: Wednesday\n");
                break;
            case 5:
                printf("Day of the week: Thursday\n");
                break;
            case 6:
                printf("Day of the week: Friday\n");
                break;
            case 7:
                printf("Day of the week: Saturday\n");
                break;
        }
    }
    else 
    {
        printf("Invalid week number. Please enter a number between 1 and 7.\n");
    }
}


