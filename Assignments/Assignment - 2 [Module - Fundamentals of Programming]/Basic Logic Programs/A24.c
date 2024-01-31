// Accept 5 employees name and salary and count average and total salary

#include <stdio.h>

main() {
    double salary1, salary2, salary3, salary4, salary5, avgSalary;
    char name1[100], name2[100], name3[100], name4[100], name5[100];

    printf("Enter the Name of the First Employee: ");
    scanf("%s", name1);
    printf("Enter the Salary of %s: ", name1);
    scanf("%lf", &salary1);

    printf("Enter the Name of the Second Employee: ");
    scanf("%s", name2);
    printf("Enter the Salary of %s: ", name2);
    scanf("%lf", &salary2);

    printf("Enter the Name of the Third Employee: ");
    scanf("%s", name3);
    printf("Enter the Salary of %s: ", name3);
    scanf("%lf", &salary3);

    printf("Enter the Name of the Fourth Employee: ");
    scanf("%s", name4);
    printf("Enter the Salary of %s: ", name4);
    scanf("%lf", &salary4);

    printf("Enter the Name of the Fifth Employee: ");
    scanf("%s", name5);
    printf("Enter the Salary of %s: ", name5);
    scanf("%lf", &salary5);

    avgSalary = (salary1 + salary2 + salary3 + salary4 + salary5) / 5;

    printf("\nThe Salary of %s is %.2lf\n", name1, salary1);
    printf("The Salary of %s is %.2lf\n", name2, salary2);
    printf("The Salary of %s is %.2lf\n", name3, salary3);
    printf("The Salary of %s is %.2lf\n", name4, salary4);
    printf("The Salary of %s is %.2lf\n", name5, salary5);

    printf("\nThe Average salary of the Five Employees is Rs. %.2lf\n", avgSalary);

}
