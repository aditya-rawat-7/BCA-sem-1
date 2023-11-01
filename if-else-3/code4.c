#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int days,years,weeks;
    printf("Enter the number of days: ");
    scanf("%d",&days);
    
    years = days/365;
    weeks = (days%365)/7;
    days = days - (years*365) + (weeks*7);

    printf("Years: %d",years);
    printf("Weeks: %d",weeks);
    printf("Days: %d",days);
    return 0;
}