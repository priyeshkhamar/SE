// WAP to accept 5 students name and store it in array

#include <stdio.h>

main()
{
    char student_names[5][50]; //one array for number of students and other for their names

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student_names[i]);
    }

    printf("\nStudent names stored in the array:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("Student %d: %s\n", i + 1, student_names[i]);
    }
}
