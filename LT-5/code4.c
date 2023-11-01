#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num1,num2;
    printf("Enter the number1: ");
    scanf("%d",&num1);
    printf("Enter the number2: ");
    scanf("%d",&num2);
    for(int i=2;i<=num1*num2;i++){
        if(num1%i==0 && num2%i==0 && i>num1 && i>num2){
            printf("The highest common factor is: %d",i);
            break;
        }
    }
    return 0;
}