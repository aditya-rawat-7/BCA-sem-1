#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num%10!=0){
        int r = num%10;
        num = num/10;
        sum = sum + r;
    }
    printf("Sum: %d",sum);
    return 0;
}