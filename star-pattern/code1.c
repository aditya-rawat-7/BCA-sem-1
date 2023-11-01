#include<stdio.h>
int main(){
	printf("Aditya Rawat-23151125\n");
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>i;j--){
            printf(" ");
        }
        if(i%2==1){
            for(int k=0;k<i;k++){
            printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
