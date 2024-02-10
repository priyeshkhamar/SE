// Accept marks from user and check pass or fail

#include<stdio.h>

main()
{
    int marks;

    printf("Enter your Marks : ");
    scanf("%d",&marks);

    if(marks >= 40)
    {
        printf("Congratulations! You have Passed!");
    }
    else
    {
        printf("Sorry, you have failed!");
    }
}