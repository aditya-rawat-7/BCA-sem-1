#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Aditya Rawat - 23151125\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==1){
            sum = sum + i;
        }
    }
    printf("Sum: %d",sum);
    return 0;
}
