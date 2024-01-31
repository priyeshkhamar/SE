// WAP to convert years into days and days into years

#include <stdio.h>

main()
{
    int days;
    float years;

    printf("Enter the number of years: ");
    scanf("%f", &years);

    // Conversion
    days = years * 365.25;

    printf("%.2f years is equal to %d days.\n", years, days);

    printf("\nEnter the number of days: ");
    scanf("%d", &days);

    // Conversion
    years = days / 365.25;

    printf("%d days is equal to %.2f years.\n", days, years);
}
