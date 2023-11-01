#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int a = 0;
    int b = 1;
    int c = 0; 

    while(c<=n){
        a = b;
        b = c;
        printf(" %d ",c);
        c = a + b;
    }

    return 0;
}