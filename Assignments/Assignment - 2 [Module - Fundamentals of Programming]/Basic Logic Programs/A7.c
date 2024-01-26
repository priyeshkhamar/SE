//Find area of Rectangle Formula : A=wl

#include<stdio.h>

main()
{
	float l,w,area;
	printf("Enter the Length of the Rectangle (in cm) :");
	scanf("%f",&l);
	printf("Enter the Width of the Rectangle (in cm) :");
	scanf("%f",&w);
	area=(l*w);
	printf("The area of the Rectangle is %.2f cm^2",area);
}
