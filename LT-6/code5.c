#include<stdio.h>

int main(){
    printf("Aditya Rawat-23151125\n"); 
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int sum = 0;
        for(int j=1;j<=i;j++){
            while(j!=0){
                int prod=1;
                int r = j % 10;
                for(int k=1;k<=r;k++){
                    prod = prod * k;
                }
                sum = sum + prod;
                j = j / 10;
            }
        }    
        if(l==sum){
            printf("%d\n",sum);
        }
    }
    return 0;
}