// Patterns :
// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

#include <stdio.h>

int main()
{
    int i;

    // Print the pattern
    for (i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
}