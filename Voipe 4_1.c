//Write a program that prompts the user for two integers and prints the sum, difference and product of the numbers on the screen.

#include <stdio.h>
int main (void){
	int num1, num2,sum,difference,product;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	sum = num1+num2;
	difference = num1-num2;
	product= num1*num2;
	printf("%d + %d = %d\n", num1, num2, sum);
	printf("%d - %d = %d\n", num1, num2, difference);
	printf("%d * %d = %d\n", num1, num2, product);
}

#output
Enter the first number:83
Enter the second number:78

83+78=161
83-78=5
83*78=6474
