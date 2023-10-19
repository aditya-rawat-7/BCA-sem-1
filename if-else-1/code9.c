#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    int c = ch;
    if(c>=48 && c<=57){
        printf("It is a digit");
    }
    else if(c>=33 && c<=47){
        printf("It is a Special character");
    }
    else if(c>=97 && c<=122){
        printf("It is a Alphabet");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}