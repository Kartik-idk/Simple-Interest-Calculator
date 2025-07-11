#include<stdio.h>

int main() {
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("simple interest: %f\n", interest);
    printf("Total amount after interest: %f \n", principal + interest);
    return 0;
}