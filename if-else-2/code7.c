#include<stdio.h>
int main(){
    int side1, side2, side3;
    printf("Enter the first side of triangle: ");
    scanf("%d",&side1);
    printf("Enter the second side of triangle: ");
    scanf("%d",&side2);
    printf("Enter the third side of triangle: ");
    scanf("%d",&side3);
    if(side3>(side1+side2) || side1>(side2+side3) || side2>(side1+side3)){
        printf("The Triangle is Valid!!!");
    }
    else{
        printf("The Triangle is Invalid!!!");
    }
    return 0;
}