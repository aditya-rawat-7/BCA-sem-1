#include<stdio.h>
int main()
{
    printf("Aditya Rawat-23151125\n");
    int num;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    if(num%9==0 || num%7==0){
        printf("%d is divisible by 7 or 9",num);
    }
    else{
        printf("%d is not divisible by 7 or 9",num);
    }
    return 0;
}