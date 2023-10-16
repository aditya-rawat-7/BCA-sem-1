#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    int num1,num2,num3;
    
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    printf("Enter number 3: ");
    scanf("%d",&num3);

    printf("Number1: %d, Number2: %d and Number3: %d",num1,num2,num3);

    num1 = num1 + num2 + num3;

    num2 = num1 - (num2 + num3);

    num3 = num1 - (num2 + num3);

    num1 = num1 - (num2 + num3);

    printf("\nNew Number1: %d, New Number2: %d, New Number3: %d",num1,num2,num3);

    return 0;
}