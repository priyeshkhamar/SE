// Calculate person’s insurance premium based on salary
// Insurance Premium = 7% of Monthly Salary

#include<stdio.h>

main()
{
    int monthlySalary, insurancePremium;
    printf("Enter your Monthly Salary : ");
    scanf("%d", &monthlySalary);
    insurancePremium = 0.7*monthlySalary;
    printf("Your Monthly Insurance Premium = Rs. %d",insurancePremium);
}