// Calculate person’s Annual salary

#include<stdio.h>

main()
{
    int monthlySalary, yearlySalary;
    
    printf("Please enter your Monthly Salary : ");
    scanf("%d",&monthlySalary);

    yearlySalary = monthlySalary * 12;

    printf("Yearly Salary based on Monthly Salary of Rs. %d per month = Rs. %d",monthlySalary,yearlySalary);
}