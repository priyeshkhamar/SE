//Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>

main()
{
	float b,h,area;
	printf("Enter the measure of base of the triangle :");
	scanf("%f",&b);
	printf("Enter the height of the triangle :");
	scanf("%f",&h);
	area=(0.5*b*h);
	printf("The area of the triangle is %.2f",area);	
}
