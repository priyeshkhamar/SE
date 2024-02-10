// Check Number Is Positive or Negative

#include<stdio.h>

main()
{
    int num;
    
    printf("Enter a Number to check : ");
    scanf("%d", &num);

    if(num==0)
    {
        printf("The number is Zero.");
    }

    else if (num>0)
    {
        printf("%d is a Positive Number.",num);
    }
    else
    {
        printf("%d is a Negative Number.",num);
    }
}