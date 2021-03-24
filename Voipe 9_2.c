/*The file "numbers.s" contains 4 integers. The numbers are on the first line of the file, separated by spaces. Write a program that reads the integers from the file and calculates their sum. Finally, the program prints the numbers and the sum on the screen.*/

#include <stdio.h>
int main (void){
	int num1, num2, num3, num4;
	int sum = 0;
	FILE *numberfile = fopen("numbers.s", "r");
	fscanf(numberfile, "%d %d %d %d ", &num1, &num2, &num3, &num4);
	sum = num1 + num2 + num3 + num4;
	fclose(numberfile);
		
	printf("Numbers found in the file numbers.s:\n");
	printf("%d, %d, %d and %d\n\n", num1, num2, num3, num4);
	printf("Sum of the numbers: %d\n", sum);
	return 0;
}

/*output
Numbers found in the file numbers.s:
93, 432, 65 and 22

Sum of the numbers: 612
*/
