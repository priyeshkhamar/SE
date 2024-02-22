// Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
#include<string.h>

main()
{
    char a[100];
    int i, vowel = 0, consonant = 0, number =0;

    printf("Enter a String : ");
    gets(a);

    for (i=0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            vowel++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            number++;
        }
        else
        {
            consonant++;
        }
    }
    printf("\nNumber of Vowels : %d",vowel);
    printf("\nNumber of Consonants : %d",consonant);
    printf("\nYou have entered %d numbers!",number);
}