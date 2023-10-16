#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    float base,height,area;
    printf("Enter the base of triangle: ");
    scanf("%f",&base);
    printf("Enter the height of triangle: ");
    scanf("%f",&height);
    area = base * height * 0.5;
    printf("Area of triangle: %.2f",area);

    return 0;
}