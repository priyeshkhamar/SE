// Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include<stdio.h>

main()
{
    double monthlySalary, insurancePremium, loanInstallment, remainingSalary;

    printf("Enter your Monthly Salary : ");
    scanf("%lf",&monthlySalary);

    insurancePremium = monthlySalary * 0.10;
    loanInstallment = monthlySalary * 0.10;
    remainingSalary = monthlySalary - (insurancePremium + loanInstallment);

    printf("Your Monthly Salary is Rs %.2lf\n",monthlySalary);
    printf("Your Insurance Premium is Rs. %.2lf\n",insurancePremium);
    printf("Your Loan Installment  is Rs. %.2lf\n",loanInstallment);
    printf("Your Remaining Salary is Rs %.2lf", remainingSalary);
}
