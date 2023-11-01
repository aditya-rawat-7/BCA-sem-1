#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    float sal,gsal,hra,da;
    printf("Enter the employee salary: ");
    scanf("%f",&sal);
    if(sal<=10000){
        hra = sal/5;
        da = (sal*4)/5;
    }
    else if(sal>=10000 && sal<=20000){
        hra = sal/4;
        da = sal*0.9;
    }
    else if(sal>20000){
        hra = sal*0.3;
        da = sal*0.95;
    }
    gsal = sal + hra + da;
    printf("The Gross salary of the employee is: %.2f",gsal);
    return 0;
}