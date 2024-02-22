// Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], sub[100];
    int point, length;

    printf("Enter a String : ");
    gets(a);

    printf("Enter the position from where you want to extract the Sub-String : ");
    scanf("%d", &point);

    printf("Enter the length of the Sub-String that you want to extract : ");
    scanf("%d", &length);

    if (point >= 0 && point < strlen(a))
    {
        strncpy(sub, a + point, length);
        sub[length] = '\0';
    }
    else
    {
        printf("Invalid starting position.\n");
    }

    printf("\nThe extracted Sub-String is : %s\n", sub);
}
