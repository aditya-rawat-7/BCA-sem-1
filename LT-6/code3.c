#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int c = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c!=2){
            printf("%d\n",i);
        }
    }
    return 0;
}