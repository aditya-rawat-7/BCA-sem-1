#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Aditya Rawat - 23151125\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("Sum is: %d",sum);
    return 0;
}
