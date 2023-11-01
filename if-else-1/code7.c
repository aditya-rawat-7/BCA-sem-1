#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    int n = ch;
    if(n>=97 && n<=122){
        printf("Yes, it is an alphabet");
    }
    else{
        printf("No, it is not an alphabet");
    }
    return 0;
}