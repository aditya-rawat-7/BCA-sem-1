#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    float l,b;
    printf("Enter the length of rectangle: ");
    scanf("%f",&l);
    printf("Enter the breath of rectangle: ");
    scanf("%f",&b);

    float area = l * b;

    printf("Area of rectangle: %.2f",area);

    return 0;
}
