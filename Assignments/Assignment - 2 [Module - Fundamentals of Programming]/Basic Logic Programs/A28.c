// Convert years into days and months

#include <stdio.h>

int main()
{
    int years, months;
    double days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Conversion
    days = years * 365.25;
    months = years * 12;

    printf("%d Years is approximately %d Months and %.2f Days.\n", years, months, days);
}
