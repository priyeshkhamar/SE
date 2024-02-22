// (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n) 

#include<stdio.h>

main()
{
    int i, n, ans = 0;

    printf("Enter the limit for the series : ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        ans = ans + (i * i);
    }
    printf("The sum of the series (1*1) + (2*2) + (3*3) + . . . . . . . + (%d * %d) = %d",n,n,ans);
}