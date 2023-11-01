#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num%10!=0){
        int r = num % 10;
        reverse = reverse * 10 + r;
        num = num / 10;
    }
    printf("%d",reverse);
    return 0;
}