Write a program that prompts the user for an integer n (n>0) and prints the numbers 1,2,3...n on the screen one below the other. Write the program using the FOR statement.
  
#include <stdio.h>
int main (void){
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	for(int i = 1; i <= num; i++){
		printf("%d\n", i);	
	}
}

#output
Enter an integer: 3
1
2
3
