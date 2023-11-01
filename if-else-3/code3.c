#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int unit;
    float charge;
    printf("Enter the total unit of electricity charge: ");
    scanf("%f",&unit);
    if(unit<=50){
        charge = unit*0.5;
    }
    else if(unit>50 && unit<=150){
        charge = 25 + (unit%50)*0.75;
    }
    else if(unit>150 && unit<=250){
        charge = 100 + (unit%150)*1.25;
    }
    else if(unit>250){
        charge = 225 + (unit%250)*1.5;
    }
    charge = charge + (charge/5);
    printf("Total charge cost: %.2f",charge);
    return 0;
}