#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    printf("Enter the number 2: ");
    scanf("%d",&num2);
    printf("Enter the number 3: ");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is greatest",num1);
        }
        else{
            printf("%d is greatest",num3);
        }
    }
    else if(num2>num3){
        if(num2>num1){
            printf("%d is greatest",num2);
        }
        else{
            printf("%d is greatest",num1);
        }
    }
    else{
        printf("%d is greatest",num3);
    }
    return 0;
}