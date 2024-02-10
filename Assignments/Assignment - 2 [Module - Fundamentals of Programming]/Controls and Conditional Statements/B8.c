// WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>

main()
{
    int height;

    printf("Enter the Height in Centimeters : ");
    scanf("%d",&height);

    if (height < 150)
    {
        printf("The person is short.");
    }
    else if ( height > 150 && height <= 170 )
    {
        printf("The person is average heighted.");
    }
    else
    {
        printf("The person is tall.");
    }
}