// WAP to show difference between Structure and Union.
// Structure

#include <stdio.h>

struct Addition
{
    int a[3], b[3], i, sum[3];
};

main()
{
    struct Addition s1;

    for (s1.i = 0; s1.i < 3; s1.i++)
    {
        printf("Enter the number of first array : ");
        scanf("%d", &s1.a[s1.i]);
    }

    for (s1.i = 0; s1.i < 3; s1.i++)
    {
        printf("Enter numbers of the second array : ");
        scanf("%d", &s1.b[s1.i]);
    }

    for (s1.i = 0; s1.i < 3; s1.i++)
    {
        s1.sum[s1.i] = s1.a[s1.i] + s1.b[s1.i];
    }

    printf("Sum of Arrays : ");
    for (s1.i = 0; s1.i < 3; s1.i++)
    {
        printf("%d ", s1.sum[s1.i]);
    }
    printf("\n");
}
