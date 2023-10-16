#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Aditya Rawat - 23151125\n");
    printf("Enter the number: ");
    scanf("%d",&num);

    while(num%10!=0){
        num = num/10;
        count++;
    }

    printf("%d",count);
    return 0;
}
