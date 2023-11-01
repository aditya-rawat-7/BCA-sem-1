#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    int c = ch;
    if(c>=97 && c<=122){
        printf("Character is in Lowercase");
    }
    else if(c>=65 && c<=90){
        printf("Character is in Uppercase");
    }
    else{
        printf("Invalid Input!!!");
    }
    return 0;
}