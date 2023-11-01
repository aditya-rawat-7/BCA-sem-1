#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int j=i,k=i,c=0,sum=0,prod=1;

        while(j!=0){
            j = j / 10;
            c++;
        }
        
        while(i!=0){
        int prod=1;
        int r = i % 10;
        for(int i=0;i<c;i++){
            prod = prod * r;
        }
        sum = sum + prod;
        i = i / 10;
        }

        if(sum==k){
            printf("%d\n",i);
        }
    }
    

    return 0;
}