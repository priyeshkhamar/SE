// (1) + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) + ... + (1 + 2 + 3 + 4 + ... + n) 

#include<stdio.h>

main()
{
    int i, j, n, ans = 0, sum = 0;

    printf("Enter the limit for the series : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            sum = sum + j;
        }        
        ans = ans + sum;
    }
    printf("Sum of the series (1) + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + . . . . + %d = %d)",n,ans);
}