// Calculate compound interest

#include<stdio.h>
#include<math.h>

int main() {
    double principal, compoundInterest;
    int time, n;
    double rate; 

    printf("Enter the Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the Time of Investment (in Years): ");
    scanf("%d", &time);

    printf("Enter the Rate of Interest (in percentage): ");
    scanf("%lf", &rate);  

    printf("Enter the No. of Times your Interest compounds in a year: ");
    scanf("%d", &n);

    
    compoundInterest = principal * (pow(1 + rate / (n * 100), n * time)) - principal;

    printf("The Compound Interest is Rs. %.2lf\n", compoundInterest);
}
