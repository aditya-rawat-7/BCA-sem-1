#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    printf("Enter the number 2: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d is greater than %d",num1,num2);
    }
    else if(num2>num1){
        printf("%d is greater than %d",num2,num1);
    }
    else{
        printf("both are equal");
    }
    return 0;
}