#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        int c = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            sum = sum + i;
        }
    }
    printf("Sum: %d",sum);
    return 0;
}