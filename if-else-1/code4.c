#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0){
        printf("Number is divisible by both 5 and 11");
    }
    else{
        printf("Number is not divisible by 5 or 11");
    }
    return 0;
}