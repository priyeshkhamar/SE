//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

main()
{
	float w,h,l,area;
	printf("Enter the Width of the Prism :");
	scanf("%f",&w);
	printf("Enter the Height of the Prism :");
	scanf("%f",&h);
	printf("Enter the Length of the Prism :");
	scanf("%f",&l);
	area=(2*((w*l)+(h*l)+(h*w)));
	printf("The area of the Prism is %.2f cm^2",area);
}
