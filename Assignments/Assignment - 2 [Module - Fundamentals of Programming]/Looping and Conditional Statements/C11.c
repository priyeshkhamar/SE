// Accept 5 names from user at run time.

#include <stdio.h>

main()
{
    char name[50];
    int i = 1;

    while (i <= 5)
    {
        printf("Enter name %d: ", i);
        scanf("%s", name);
        printf("Entered name %d: %s\n", i, name);
        i++;
    }
}
