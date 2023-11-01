#include<stdio.h>
int main(){
	printf("Aditya Rawat-23151125\n");
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
