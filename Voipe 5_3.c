Write a simple calculator program that calculates the difference, sum or product of two numbers. First, the program asks which calculation to perform. After this, the program prompts for the numbers, performs the calculation and prints the result. The selection within the program has to be done using a switch() statement.
  
#include <stdio.h>
int main (void){
	int num1, num2, select;
	printf("1: subtraction\n");
	printf("2: addition\n");
	printf("3: multiplication\n");
	printf("Select function: ");
	scanf("%d", &select);
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	switch (select){
		case 1:	{
			int sub;
			sub = num1 - num2;
			printf("%d - %d = %d", num1, num2, sub);
			break;
		}
		case 2: {
			int sum;
			sum = num1 + num2;
			printf("%d + %d = %d", num1, num2, sum);
			break;
		}
		case 3: {
			int product;
			product = num1 * num2;
			printf("%d * %d = %d", num1, num2, product);
			break;
		}
	}
}

#output
1: subtraction
2: addition
3: multiplication
Select function:3
Enter the first number:45
Enter the second number:67
45*67=3015
