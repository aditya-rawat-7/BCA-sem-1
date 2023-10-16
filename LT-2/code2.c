#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    char username[] = "aditya";
    int password = 654321;
    int uname1 = username;

    int pass;
    printf("Enter the password: ");
    scanf("%d",&pass);

    char uname[20];
    printf("Enter the Username: ");
    scanf("%s",&uname);

    int name = uname;

    if(pass==password && username==name){
        printf("Logged In successfully!");
    }
    else{
        printf("Logged In Failed!");
    }
    return 0;
}