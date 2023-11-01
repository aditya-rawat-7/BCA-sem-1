#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int a1,a2,a3;
    printf("Enter First angle of triangle: ");
    scanf("%d",&a1);
    printf("Enter Second angle of triangle: ");
    scanf("%d",&a2);
    printf("Enter Third angle of triangle: ");
    scanf("%d",&a3);
    if(a1+a2+a3==180 && a1>0 && a2>0 && a3>0){
        printf("The triangle is valid!!!");
    }
    else{
        printf("Triangle is not valid!!!");
    }
    return 0;
}