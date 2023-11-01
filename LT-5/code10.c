#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,dig,sum=0;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    int num2 = num;

    printf("Enter the number of digits: ");
    scanf("%d",&dig);

    while(num!=0){
        int prod=1;
        int r = num % 10;
        for(int i=0;i<dig;i++){
            prod = prod * r;
        }
        sum = sum + prod;
        num = num / 10;
    }

    if(sum==num2){
        printf("The Number is Armstrong");
    }
    else{
        printf("The number is not armstrong");
    }
    return 0;
}