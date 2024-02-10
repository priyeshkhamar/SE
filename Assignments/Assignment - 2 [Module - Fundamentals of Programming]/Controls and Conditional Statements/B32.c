// Write a C program to input basic salary of an employee and calculateits Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <stdio.h>

main() 
{
    float basicSalary, hra, da, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on conditions
    if (basicSalary <= 10000) 
    {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } 
    else if (basicSalary <= 20000) 
    {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } 
    else 
    {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }

    // Calculate Gross Salary
    grossSalary = basicSalary + hra + da;

    // Display the result
    printf("\nEmployee Salary Details\n");
    printf("Basic Salary : Rs. %.2f\n", basicSalary);
    printf("HRA : Rs. %.2f\n", hra);
    printf("DA : Rs. %.2f\n", da);
    printf("Gross Salary : Rs. %.2f\n", grossSalary);
}
