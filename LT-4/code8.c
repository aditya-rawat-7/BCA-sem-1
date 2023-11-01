#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int num;
    int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    while(num!=0){
        num = num / 10;
        int r = num % 10;
        if(r==0){
            n0++;
        }
        else if(r==1){
            n1++;
        }
        else if(r==2){
            n2++;
        }
        else if(r==3){
            n3++;
        }
        else if(r==4){
            n4++;
        }
        else if(r==5){
            n5++;
        }
        else if(r==6){
            n6++;
        }
        else if(r==7){
            n7++;
        }
        else if(r==8){
            n8++;
        }
        else if(r==9){
            n9++;
        }
    }

    printf("0: %d 1: %d 2: %d 3: %d 4: %d 5: %d 6: %d 7: %d 8: %d 9: %d",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
    return 0;
}