// WAP to show difference between Structure and Union.
// Union

#include <stdio.h>

union Addition
{
    int a[3], b[3], sum[3], i;
};

main()
{
    union Addition s1, s2, s3, s4;

    for (s4.i = 0; s4.i < 3; s4.i++)
    {
        printf("Enter the number of first array : ");
        scanf("%d", &s1.a[s4.i]);
    }

    for (s4.i = 0; s4.i < 3; s4.i++)
    {
        printf("Enter numbers of the second array : ");
        scanf("%d", &s2.b[s4.i]);
    }

    for (s4.i = 0; s4.i < 3; s4.i++)
    {
        s3.sum[s4.i] = s1.a[s4.i] + s2.b[s4.i];
    }

    printf("Sum of Arrays : ");
    for (s4.i = 0; s4.i < 3; s4.i++)
    {
        printf("%d ", s3.sum[s4.i]);
    }
    printf("\n");
}
