#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter first side of triangle: ");
    scanf("%d",&side1);
    printf("Enter second side of triangle: ");
    scanf("%d",&side2);
    printf("Enter third side of triangle: ");
    scanf("%d",&side3);

    if(side1==side2 && side2==side3){
        printf("The triangle is Equilateral");
    }
    else if(side1==side2 || side2==side3 || side1==side3){
        printf("Triangle is Isoceles");
    }
    else if(side1!=side2 && side2!=side3){
        printf("Triangle is scalene");
    }
    return 0;
}