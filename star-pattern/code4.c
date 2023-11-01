#include<stdio.h>
int main(){
	printf("Aditya Rawat-23151125\n");
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(int i=rows;i>=1;i--){

        for(int k=i;k<=rows;k++){
            printf(" ");
        }

        for(int j=i;j>=1;j--){
            if(j<i && j>1 && i!=rows && i!=1 || i%2==0){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
