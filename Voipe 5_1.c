Write a program that prompts the user for an integer and checks whether it is even or odd. If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".
  
#include <stdio.h>
int main (void){
	int num1;
	printf("Enter an integer: ");
	scanf("%d", &num1);
	if(num1 % 2 == 0){
		printf("Number %d is even.\n", num1);
	}else if(num1 % 2 == 1){
		printf("Number %d is odd.\n", num1);	
	}else{
		printf("An error message");
	}
	return 0;
}

#output
Enter an integer: 1978
Number 1978 is even.
