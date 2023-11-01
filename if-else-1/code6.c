#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%4==0 && num%100!=0){
        printf("The year is leap year");
    }
    else{
        printf("The year is not a leap year");
    }
    return 0;
}