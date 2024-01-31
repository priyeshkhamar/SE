// Convert minutes into seconds and hours

#include<stdio.h>

main()
{
    float minutes, seconds, hours;

    printf("Enter the Number of Minutes : ");
    scanf("%f",&minutes);

    //conversion
    seconds = minutes * 60;
    hours = minutes/60;

    printf("%.0f Minutes = %.2f Hours and %.0f Seconds",minutes,hours,seconds);
}