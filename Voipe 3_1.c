/*Write a program that first asks the user for an integer and after that, a floating-point number. Finally, the program prints both numbers on the screen. The floating-point number shall be printed with two decimal places of precision.*/

#include <stdio.h>
int main (void){
	int num;
	float fnum;
	printf("Enter an integer: ");
	scanf("%i", &num);
	printf("Enter a decimal number: ");
	scanf("%f", &fnum);
	
	printf("You entered the integer:%i\n",num);
	printf("You entered the decimal number, rounded to two decimal places:%.2f\n",fnum);
}
