#include <stdio.h>

void showMenu()
{
    printf("-----------Food Menu----------- \n");
    printf("1. Pizza \t Price = Rs. 180/pcs\n");
    printf("2. Burger \t Price = Rs. 100/pcs\n");
    printf("3. Dosa \t Price = Rs. 120/pcs\n");
    printf("4. Idli \t Price = Rs. 50/pcs\n");
}

main()
{
    int choice, itemNo = 4, order[itemNo], i, quantity, prices[] = {180, 100, 120, 50}, totalAmount = 0;
    char moreItems;

    for (i = 0; i < itemNo; ++i)
    {
        order[i] = 0;
    }

    while (1)
    {
        // Show Menu
        showMenu();

        // Get order from user
        printf("Please enter your choice (Enter 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        if (choice >= 1 && choice <= itemNo)
        {
            // get number of items
            printf("Enter the quantity: ");
            scanf("%d", &quantity);

            // Update order and print the total at the time of adding items
            order[choice - 1] = order[choice - 1] + quantity;
            printf("Amount: Rs.%d\n", prices[choice - 1] * quantity);

            // Calculate and print the total
            for (i = 0; i < itemNo; ++i)
            {
                totalAmount = totalAmount + prices[i] * order[i];
            }
            printf("Total Amount: Rs.%d\n", totalAmount);

            // Ask for more items
            printf("Do you want to place more orders? (y/n): ");
            scanf(" %c", &moreItems);

            if (moreItems != 'y' && moreItems != 'Y')
            {
                break;
            }
        }
        else
        {
            printf("Invalid Choice !\n");
        }
    }
}
