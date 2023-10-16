#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    float side,area,vol;
    printf("Enter the side of cube: ");
    scanf("%f",&side);
    area = 6*side*side;
    vol = side*side*side;
    printf("Area: %.2f \nVolume: %.2f",area,vol);
    return 0;
}