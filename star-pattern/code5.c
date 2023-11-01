#include<stdio.h>
int main(){
	printf("Aditya Rawat-23151125\n");
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        
        for(int k=rows;k>=i;k--){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=rows-1;i>=1;i--){
        for(int k=i;k<=rows;k++){
            printf(" ");
        }
        
        for(int j=i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
