#include<stdio.h>
int main(){
	printf("Aditya Rawat-23151125\n");
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int k=rows;k>i;k--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            
            if(i>2 && i<rows && j>0 && j<i-1){
                printf("  ");
            }
            else if(i%2!=0){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
