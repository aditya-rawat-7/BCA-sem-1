#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num%10!=0){
        int r = num%10;
        if(r==0){
            printf("zero ");
        }
        else if(r)
        num = num/10;
    }
    return 0;
}