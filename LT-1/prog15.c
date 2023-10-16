#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    float p,r,n,si;
    printf("Enter the principle amount: ");
    scanf("%f",&p);
    printf("Enter the rate of intrest: ");
    scanf("%f",&r);
    printf("Enter the time(in months): ");
    scanf("%f",&n);
    si = (p*r*n)/1200;
    printf("Simple Intrest: %.2f",si);
    return 0;
}