#include<stdio.h>
int main()
{
	printf("Aditya Rawat-23151125\n");
	float num1,num2,c;
	printf("Enter the number 1: ");
	scanf("%f",&num1);
	printf("Enter the number 2: ");
	scanf("%f",&num2);
	printf("Number 1: %0.1f \n Number 2: %0.1f",num1,num2);
	c = num1;
	num1 = num2;
	num2 = c;
	printf("\nNew Number 1: %0.1f \n New Number 2: %0.1f",num1,num2);
	return 0;
}
