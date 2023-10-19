#include<stdio.h>
int main(){
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