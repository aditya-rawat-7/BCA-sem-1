#include<stdio.h>
int main()
{
	printf("Aditya Rawat-23151125\n");
	int num1,num2;
	printf("Enter the number 1: ");
	scanf("%d",&num1);
	printf("Enter the number 2: ");
	scanf("%d",&num2);
	printf("Number 1: %d \nNumber 2: %d",num1,num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("\nNew number 1: %d \nNew number 2: %d",num1,num2);
	return 0;
}

