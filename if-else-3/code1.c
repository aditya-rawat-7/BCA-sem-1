#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    int m,c,p,b,com,perc;
    char grad;
    printf("Enter your maths marks: ");
    scanf("%d",&m);
    printf("Enter your chemistry marks: ");
    scanf("%d",&c);
    printf("Enter your physics marks: ");
    scanf("%d",&p);
    printf("Enter your biology marks: ");
    scanf("%d",&b);
    printf("Enter your commerce marks: ");
    scanf("%d",&com);

    perc = (m+c+p+b+com)/5;

    if(perc>=90){
        grad = 'A';
    }
    else if(perc>=80){
        grad = 'B';
    }
    else if(perc>=70){
        grad = 'C';
    }
    else if(perc>=60){
        grad = 'D';
    }
    else if(perc>=40){
        grad = 'E';
    }
    else if(perc<40){
        grad = 'F';
    }
    printf("You have got %c Grade!",grad);
    return 0;
}