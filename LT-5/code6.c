#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }

    if(count==2){
        printf("%d is prime number",num);
    }
    else{
        printf("%d is not a prime number");
    }
    return 0;
}