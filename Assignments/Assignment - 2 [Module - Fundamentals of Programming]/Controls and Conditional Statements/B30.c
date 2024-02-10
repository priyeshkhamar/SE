// If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-

#include <stdio.h>

main()
{
    int bill, surcharge, total;

    printf("Enter the bill amount: ");
    scanf("%d", &bill);

    if (bill < 256)
    {
        printf("The minimum bill should be Rs. 256.\n");
    }
    else
    {
        if (bill > 800)
        {
            surcharge = 0.18 * bill;
        }
        else
        {
            surcharge = 0;
        }

        total = bill + surcharge;

        printf("Bill Amount is Rs. %d\n", bill);
        printf("Surcharge is Rs. %d\n", surcharge);
        printf("Total Amount is Rs. %d\n", total);
    }
}