// b.
// Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage

#include <stdio.h>

struct employee
{
    int empno, age;
    char empname[20], address[100];
};

main()
{
    struct employee employees[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Employee No. for Employee %d: ", i + 1);
        scanf("%d", &employees[i].empno);

        printf("Enter Employee Name for Employee %d: ", i + 1);
        scanf("%s", employees[i].empname);

        printf("Enter Employee Address for Employee %d: ", i + 1);
        scanf("%s", employees[i].address);

        printf("Enter Employee Age for Employee %d: ", i + 1);
        scanf("%d", &employees[i].age);

        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("Employee %d Details: \n", i + 1);
        printf("Employee No.: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Address: %s\n", employees[i].address);
        printf("Employee Age: %d\n\n", employees[i].age);
    }
}
