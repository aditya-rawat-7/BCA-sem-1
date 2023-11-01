#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,count=0,value;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of digits: ");
    scanf("%d",&value);
    while(num%10!=0){
        int r = num%10;
        if(count==0){
            printf("First Digit: %d\n",r);
        }
        else if(count==value-1){
            printf("Last Digit: %d\n",r);
        }
        num = num/10;
        count++;        
    }
    return 0;
}