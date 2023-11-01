#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num;
    printf("Enter the month in number: ");
    scanf("%d",&num);

    if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12){
        printf("31 Days");
    }
    else if(num==2){
        printf("28 Days");
    }
    else if(num < 12){
        printf("30 Days");
    }
    return 0;
}