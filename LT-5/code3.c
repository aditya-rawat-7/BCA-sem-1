#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int fact=1,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact = fact * i;
    }
    printf("Factorial of %d! is %d",num,fact);
    return 0;
}