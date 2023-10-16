#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    float l,b,h,area,vol;
    printf("Enter the lenght of cuboid: ");
    scanf("%f",&l);
    printf("Enter the breath of cuboid: ");
    scanf("%f",&b);
    printf("Enter the height of cuboid: ");
    scanf("%f",&h);
    area = 2*(l*b+b*h+l*h);
    vol = l*b*h;
    printf("Volume: %.2f \nArea: %.2f ",vol,area);
    return 0;
}