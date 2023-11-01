#include<stdio.h>
#include<math.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num,value,count=0,sum=0,first,end,number=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of digits: ");
    scanf("%d",&value);
    
    int ten=1;
    while(num%10!=0){
        int r = num%10;
        if(count==0){
            end = r;
        }
        else if(count==value-1){
            first = r;
        }
        else{
            number = number + r*ten;
            ten = ten*10;
        }
        num = num / 10;
        count++;
    }

    int num2 = end*pow(10,count-1) + number*10 + first ;
    printf("%d",num2);

    return 0;
}