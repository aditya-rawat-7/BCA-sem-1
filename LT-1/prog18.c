#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    float fah,cel;
    printf("Enter the temperature(in fahrenheit): ");
    scanf("%f",&fah);
    cel = (5*(fah - 32))/9;
    printf("%.2f",cel);
    return 0;
}