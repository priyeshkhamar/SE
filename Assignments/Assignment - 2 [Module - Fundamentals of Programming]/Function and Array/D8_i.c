// Write a program of structure employee that provides the following
//         a.information -
//     print and display empno,
//     empname, address andage

#include <stdio.h>

struct employee
{
    int empno, age;
    char empname[20], address[100];
};

main()
{
    struct employee s1;

    printf("Enter your Employee No. : ");
    scanf("%d", &s1.empno);

    printf("Enter your Name : ");
    scanf("%s", &s1.empname);

    printf("Enter your Address : ");
    scanf("%s", &s1.address);

    printf("Enter your Age : ");
    scanf("%d", &s1.age);

    printf("\n");
    printf("Employee Details :\n");
    printf("Employee No. : %d\n", s1.empno);
    printf("Employee Name : %s\n", s1.empname);
    printf("Employee Address : %s\n", s1.address);
    printf("Employee Age : %d\n", s1.age);
}