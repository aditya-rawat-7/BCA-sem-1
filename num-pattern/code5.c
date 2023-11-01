#include<stdio.h>
int main(){
	printf("Aditya Rawat-23151125\n");
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(i==j && i==rows/2+1){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
