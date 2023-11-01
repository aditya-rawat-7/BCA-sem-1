#include<stdio.h>
#include<math.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    float a,b,c,r1,r2;
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    int d = (b*b) - (4*a*c);
    if(d>=0){
        r1 = (-b-sqrt(d))/(2*a);
        r2 = (-b+sqrt(d))/(2*a);
        printf("Root1: %.2f \nRoot2: %.2f",r1,r2);
    }
    else if(d<0){
        printf("Roots are Imaginary");
    }
    return 0;
}