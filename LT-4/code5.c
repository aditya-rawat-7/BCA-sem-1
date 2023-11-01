#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,prod=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num%10!=0){
        int r = num%10;
        prod = prod * r;
        num = num/10;
    }
    printf("Product: %d",prod);
    return 0;
}