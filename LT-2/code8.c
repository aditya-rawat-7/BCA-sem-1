#include<stdio.h>
int main()
{
    printf("Aditya Rawat-23151125\n");
    char gender;
    printf("\nEnter your gender(M/F): ");
    scanf("%c",&gender);

    if(gender=='m' || gender=='M'){
        printf("Male");
    }
    else if(gender=='f' || gender=='F'){
        printf("Female");
    }
    else{
        printf("Invalid Gender!");
    }
    return 0;
}