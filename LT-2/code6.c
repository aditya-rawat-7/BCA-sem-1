#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    int num1,num2;
    
    printf("Enter the number1: ");
    scanf("%d",&num1);
    printf("Enter the number2: ");
    scanf("%d",&num2);

    printf("Original Num1: %d and Original Num2: %d",num1,num2);

    num1++, num2--;

    printf("\nUpdated Num1: %d and Updated Num3: %d",num1,num2);
    return 0;
}