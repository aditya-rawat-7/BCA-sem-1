#include<stdio.h>
int main(){
    printf("Aditya Rawat-23151125\n");
    char name[25],course[10];
    int age,batch,sid;

    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your batch: ");
    scanf("%d",&batch);
    printf("Enter your student ID: ");
    scanf("%d",&sid);
    printf("Enter your course: ");
    scanf("%s",&course);

    printf("\n\nName: %s \nAge: %d \nBatch: %d \nStudent ID: %d \nCourse: %s",name,age,batch,sid,course);
    
    return 0;
}