// Convert kilometers into meters

#include<stdio.h>

main()
{
    float km, meters;

    printf("Enter the Number of KiloMeters : ");
    scanf("%f",&km);

    //conversion

    meters = km*1000;

    printf("%.2f KM is equal to %.2f Meters.",km,meters);
}