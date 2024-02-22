#include <stdio.h>

void displayMenu()
{
    printf("Food Menu : \n");
    printf("1. Pizza \t Price = Rs. 180/pcs\n");
    printf("2. Burger \t Price = Rs. 100/pcs\n");
    printf("3. Dosa \t Price = Rs. 120/pcs\n");
    printf("4. Idli \t Price = Rs. 50/pcs\n");
}

void main()
{
    int itemCount = 4, order[itemCount], i, choice, quantity;
    char moreItems;
    float prices[] = {180, 100, 120, 50}, totalBill = 0;

    for (i = 0; i < itemCount; ++i)
    {
        order[i] = 0;
    }

    displayMenu();

    while (1)
    {
        printf("\nPlease enter your choice ( Enter 0 to exit. ): ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        if (choice >= 1 && choice <= itemCount)
        {
            printf("Enter the Quantity : ");
            scanf("%d", &quantity);

            order[choice - 1] = order[choice - 1] + quantity;
            printf("You have selected %d number of item %d.\n", quantity, choice);

            printf("Do you want to place more order? (y/n): ");
            scanf(" %c", &moreItems);

            if (moreItems != 'y' && moreItems != 'Y')
            {
                break;
            }
        }
        else
        {
            printf("Invalid choice! Please enter a valid item number.\n");
        }
    }

    // Display the final bill
    printf("\n----- Final Bill -----\n");

    for (i = 0; i < itemCount; ++i)
    {
        if (order[i] > 0)
        {
            printf("Item %d x%d: Rs.%.2f\n", i + 1, order[i], prices[i] * order[i]);
            totalBill = totalBill + prices[i] * order[i];
        }
    }

    printf("\nTotal Bill: Rs.%.2f\n", totalBill);
    printf("Thank you for ordering with us!\n");
}