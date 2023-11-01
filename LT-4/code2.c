#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,count=0,value,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of digits: ");
    scanf("%d",&value);
    while(num%10!=0){
        int r = num%10;
        if(count==0){
            sum = sum + r;
        }
        else if(count==value-1){
            sum = sum + r;
        }
        num = num/10;
        count++;        
    }
    printf("Sum: %d",sum);
    return 0;
}