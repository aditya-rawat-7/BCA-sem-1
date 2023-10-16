#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    int num;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    int a = num >> 2;
    printf("Right shift: %d",a);
    return 0;
}