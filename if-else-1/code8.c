#include<stdio.h>
int main(){
    printf("Aditya Rawat - 23151125\n");
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
        printf("It is a vowel");
    }
    else{
        printf("It is a consonant");
    }
    return 0;
}