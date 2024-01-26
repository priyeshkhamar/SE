//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>

main()
{
	int n1, n2;
	printf("Enter the first Number :");
	scanf("%d",&n1);
	printf("Enter the second Number :");
	scanf("%d",&n2);
	printf("Addition : %d",n1+n2);
	printf("\nSubtraction : %d",n1-n2);
	printf("\nMultiplication : %d",n1*n2);
	printf("\nDivision : %d",n1/n2);
	printf("\nModulo : %d",n1%n2);
}
