#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int num2 = num;

    while(num!=0){
        int r = num % 10;
        int prod = 1;
        for(int i=1;i<=r;i++){
            prod = prod * i;
        }
        sum = sum + prod;
        num = num / 10;
    }
    
    if(sum == num2){
        printf("%d is a strong number",num2);
    }
    else{
        printf("%d is not a strong number",num2);
    }
    return 0;
}