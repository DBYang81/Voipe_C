//Write a program that prompts the user for an integer n (n>0) and prints the factorial of the number on the screen. For example, the factorial of n is designated n!, which means the number calculated as follows: 1*2*3...*n

#include <stdio.h>
int main (void){
	int num;
	int fact = 1;
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++){
		fact = fact * i;	
	}
	printf("The factorial of %d is %d", num, fact);	
}

/*#output
Enter an integer: 3
The factorial of 3 is 6
*/
