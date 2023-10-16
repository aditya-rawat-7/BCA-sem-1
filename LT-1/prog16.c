#include<stdio.h>
#include<math.h>
int main()
{
    printf("Aditya Rawat-23151125\n");
    float p,r,n,ci;
    printf("Enter the Principle amount: ");
    scanf("%f",&p);
    printf("Enter the Rate of Intrest: ");
    scanf("%f",&r);
    printf("Enter the time(in years): ");
    scanf("%f",&n);
    ci = p*(pow((1+(r/n)),n));
    printf("Amount: %.2f",ci);
    return 0;
}