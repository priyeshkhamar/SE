#include <stdio.h>

showMenu()
{
    printf("-----------Food Menu----------- \n");
    printf("1. Pizza \t Price = Rs. 180/pcs\n");
    printf("2. Burger \t Price = Rs. 100/pcs\n");
    printf("3. Dosa \t Price = Rs. 120/pcs\n");
    printf("4. Idli \t Price = Rs. 50/pcs\n");
}

bill()
{
    printf("----------Bill----------");
}

main()
{
    int choice, itemCount, order[itemCount], i, quantity;

    for (i = 0; i < itemCount; ++i)
    {
        order[i] = 0;
    }

    while (choice != 0)
    {
        showMenu();

        printf("Please enter your choice (Enter 0 to exit) : ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        if (choice >= 1 && choice <= itemCount)
        {
            printf("Enter the quantity : ");
            scanf("%d", &quantity);
        }
    }
}