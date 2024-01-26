//Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>

main()
{
	float a,b,c,circum;
	printf("Enter the first side of the triangle :");
	scanf("%f",&a);
	printf("Enter the second side of the triangle :");
	scanf("%f",&b);
	printf("Enter the third side of the triangle :");
	scanf("%f",&c);
	circum=(a+b+c);
	printf("The circumference of the Triangle is %.2f cm",circum);
}
