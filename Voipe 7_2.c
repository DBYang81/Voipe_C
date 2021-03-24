/*Write a calculator program that calculates the sum, difference or product of two integers. The program asks for the type of calculation first (1 = sum, 2 = difference, 3 = product). After calculation, the result is printed on the screen and the program returns to prompt for the next calculation.*/

#include <stdio.h>

void add(void);
void sub(void);
void multiply(void);

void main()
{
  int choice;
  do{

    printf(" 1:sum of two numbers\n 2:difference of two numbers\n 3:product of two numbers\n<0: terminate the program\n");
    printf("Select calculation:");
    scanf("%d", &choice);
    if(choice < 0) {
    	printf("Terminating the program...");
		break;
    }
	if(choice == 1) {
      add();
    }
    else if(choice == 2) {
      sub();
    }
    else if(choice == 3) {
      multiply();
    }
    else {
      printf("You entered an invalid number.\n\n");
    }
  }while(choice>0);
}

void add (void){
	int sum, fnum, snum;
	printf("Enter the first number:");
	scanf("%d", &fnum);
	printf("Enter the second number:");
	scanf("%d", &snum);
	sum = fnum + snum;
	printf("%d + %d = %d\n\n", fnum, snum, sum);
}
void sub (void){
	int diff, fnum, snum;
	printf("Enter the first number:");
	scanf("%d", &fnum);
	printf("Enter the second number:");
	scanf("%d", &snum);
	diff = fnum - snum;
	printf("%d - %d = %d\n\n", fnum, snum, diff);
}
void multiply (void){
	int product, fnum, snum;
	printf("Enter the first number:");
	scanf("%d", &fnum);
	printf("Enter the second number:");
	scanf("%d", &snum);
	product = fnum * snum;
	printf("%d * %d = %d\n\n", fnum, snum, product);
}


/*output

*/
