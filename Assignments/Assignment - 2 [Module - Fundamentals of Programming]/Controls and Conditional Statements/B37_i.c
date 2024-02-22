// WAP to show
//     i.Monday to Sunday using switch case

#include <stdio.h>

main()
{
    int day;

    printf("Enter the day number (1-7) : ");
    scanf("%d", &day);

    switch (day)
    {

    case (1):
        printf("Sunday\n");

    case (2):
        printf("Monday\n");

    case (3):
        printf("Tuesday\n");

    case (4):
        printf("Wednesday\n");

    case (5):
        printf("Thursday\n");

    case (6):
        printf("Friday\n");

    case (7):
        printf("Saturday\n");
    }
}