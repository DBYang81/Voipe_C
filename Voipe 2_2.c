//Write a program that prompts the user for an integer, calculates the square and prints the result on the screen (also print out a newline character \n after the result). After printing, the program closes itself.
  
  #include <stdio.h>
int main(void){
	int num, squnum;
	printf("Enter an integer: ");
	scanf("%d", &num);
	squnum = num * num;
	printf("The square of the number you entered is %d\n", squnum);
	return 0;

}

//output

Enter an integer: 11
The square of the number you entered is 121
