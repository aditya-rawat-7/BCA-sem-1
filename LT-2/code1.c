#include<stdio.h>
int main()
{
    printf("Aditya Rawat-23151125\n");
    int num1, num2;
    printf("Num1: ");
    scanf("%d",&num1);
    printf("Num2: ");
    scanf("%d",&num2);
    if(num1>num2 && num2<num1){
        printf("Num1: %d is greatest!",num1);
    }
    else{
        printf("Num2: %d is greatest",num2);
    }
    return 0;
}