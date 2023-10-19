#include<stdio.h>
int main(){
    int sp,cp;
    printf("Enter the Selling price: ");
    scanf("%d",&sp);
    printf("Enter the Cost Price: ");
    scanf("%d",&cp);
    if(sp>cp){
        printf("Profit: %d",sp-cp);
    }
    else if(cp>sp){
        printf("Loss: %d",cp-sp);
    }
    else if(cp==sp){
        printf("No profit/loss");
    }
    return 0;
}