// Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

main()
{
    int cp, sp, profit, loss;
    printf("Enter your Cost Price : ");
    scanf("%d", &cp);
    printf("Enter your Selling Price : ");
    scanf("%d", &sp);
    profit=sp-cp;
    loss=cp-sp;

    if(sp>cp)
    {
        printf("Congrats! You have made a Profit of Rs. %d!",profit);
    }
    else
    {
        printf("Sorry! You have made a Loss of Rs. %d!",loss);
    }
}