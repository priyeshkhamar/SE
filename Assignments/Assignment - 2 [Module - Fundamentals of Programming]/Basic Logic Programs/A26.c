// Convert temperature Fahrenheit to Celsius

#include<stdio.h>

main()
{
    double tempf, tempc;

    printf("Enter Temperature in deg Fahrenheit : ");
    scanf("%lf",&tempf);

    tempc = ((tempf - 32)*5)/9; //Formula for Conversion

    printf("Temperature in deg Celcius = %.1lf",tempc);
}