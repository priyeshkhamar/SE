// Write a C program to determine eligibility for admission to a professional course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140
// Input the marks obtained in
// Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include <stdio.h>

main()
{
    int physics, maths, chemistry, total, mathsPhysicsTotal;

    printf("Enter Marks in Physics : ");
    scanf("%d", &physics);

    printf("Enter Marks in Chemistry : ");
    scanf("%d", &chemistry);

    printf("Enter Marks in Maths : ");
    scanf("%d", &maths);

    total = physics + maths + chemistry;
    printf("Total marks in all three subjects : %d \n", total);

    mathsPhysicsTotal = maths + physics;
    printf("Total marks in Maths and Physics : %d \n", mathsPhysicsTotal);

    if (physics >= 65 && chemistry >= 55 && maths >= 50 && (total >= 190 || mathsPhysicsTotal >= 140))
    {
        printf("The Candidate is eligible.\n");
    }
    else
    {
        printf("The Candidate is not eligible.\n");
    }
}