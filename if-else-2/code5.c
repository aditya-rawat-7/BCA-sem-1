#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int amt,n500=0,n200=0,n100=0,n20=0,n10=0,n1=0;
    printf("Enter the total number of amount: ");
    scanf("%d",&amt);
    while(amt!=0){
        if(amt>=500){
            n500 = amt/500;
            amt = amt%500;
        }
        else if(amt<500 && amt>=200){
            n200 = amt/200;
            amt = amt%200;
        }
        else if(amt<200 && amt>=100){
            n100 = amt/100;
            amt = amt%100;
        }
        else if(amt<100 && amt>=20){
            n20 = amt/20;
            amt = amt%20;
        }
        else if(amt<20 && amt>=10){
            n10 = amt/10;
            amt = amt%10;
        }
        else if(amt<10 && amt>=1){
            n1 = amt/1;
            amt = amt%1;
        }
    }
    printf("500 notes: %d,\n200 notes: %d \n100 notes: %d \n20 notes: %d \n10 notes: %d \n1 coins: %d",n500,n200,n100,n20,n10,n1);
    return 0;
}