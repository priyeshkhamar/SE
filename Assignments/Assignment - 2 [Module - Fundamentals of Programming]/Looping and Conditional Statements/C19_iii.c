// Patterns:
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include <stdio.h>

main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++) // rows
    {
        for (j = 1; j <= 5 - i; j++) // spaces
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) // columns
        {
            printf("*");
        }
        printf("\n");
    }
}