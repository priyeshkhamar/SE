// Accept 5 expense from user and find average of expense

#include<stdio.h>

main()
{
    int expense1,expense2,expense3,expense4,expense5,avg;

    printf("Enter Your Expense 1 : ");
    scanf("%d",&expense1);

    printf("Enter Your Expense 2 : ");
    scanf("%d",&expense2);

    printf("Enter Your Expense 3 : ");
    scanf("%d",&expense3);

    printf("Enter Your Expense 4 : ");
    scanf("%d",&expense4);

    printf("Enter Your Expense 5 : ");
    scanf("%d",&expense5);

    avg = (expense1+expense2+expense3+expense4+expense5)/5;

    printf("Your Average Expense = Rs. %d",avg);
}