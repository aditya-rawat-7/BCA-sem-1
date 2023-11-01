#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,num2,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    num2 = num;

    while(num%10!=0){
        int r = num % 10;
        reverse = reverse * 10 + r;
        num = num / 10;
    }

    if(num2 == reverse){
        printf("Number is Palindrome!!!");
    }
    else{
        printf("Number is not Palindrome!!!");
    }

    return 0;
}