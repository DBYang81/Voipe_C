/*Write a program that takes three integers as input and prints the smallest and largest of these numbers. The main program must prompt for integers and read them. Write the functions largest() and smallest() that receive the entered numbers as their parameters. Correspondingly, the functions shall return values corresponding to their names.*/

#include <stdio.h>

int largest (int a, int b, int c);
int smallest (int a, int b, int c);

int main (void){
	int num1, num2, num3;
	int maxnum, mininum;
	printf("Enter the 1. number: ");
	scanf("%d", &num1);
	printf("Enter the 2. number: ");
	scanf("%d", &num2);
	printf("Enter the 3. number: ");
	scanf("%d", &num3);
	maxnum = largest (num1, num2, num3);
	mininum = smallest (num1, num2, num3);
	printf("Among the numbers you entered,\n the largest was %d and the smallest was %d.", maxnum, mininum);  
}
int largest (int a, int b, int c){
	int max = a;
	if(b > max){
		max = b;
	}else if(c > max){
		max = c;
	}
	return max;
}
int smallest (int a, int b, int c){
	int min = a;
	if(b < min){
		min = b;
	}else if(c < min){
		min = c;	
	}
	return min;
}

/*output
Enter the 1. number:12355
Enter the 2. number:32145
Enter the 3. number:22112
Among the numbers you entered,
the largest was 32145 and the smallest was 12355.
*/
