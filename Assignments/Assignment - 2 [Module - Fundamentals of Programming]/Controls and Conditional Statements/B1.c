// Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>

main()
{
    int num1, num2;

    printf("Enter the First Number : ");
    scanf("%d",&num1);
    printf("Enter the Second Number : ");
    scanf("%d",&num2);  

    if(num1==num2)
    {
        printf("Both Numbers are equal!");
    }  
    else
    {
        printf("Both the numbers are not equal!");
    }
}