//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<Stdio.h>

main()
{
	int students,apples;
	printf("Enter the number of Students :");
	scanf("%d",&students);
	printf("Total number of Apples required is %d",students*5);
}
