#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    int num,c=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        if(num%i==0){
            c++;
        }
    }

    if(c!=2){
        printf("%d is a perfect number",num);
    }
    else{
        printf("%d is not a perfect number",num);
    }
    return 0;
}