//Find Area of Cube formula : a = 6a2

#include<stdio.h>

main()
{
	float side,area;
	printf("Enter the length of one side of the cube (in cm) :");
	scanf("%f",&side);
	area=(6*side*side);
	printf("The area of the cube is %.2f cm^2",area);
}
