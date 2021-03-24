/*The C program introduced in the previous exercise has been changed. This time, the program prompts the user for an integer and stores it in the variable x. The program prints the number, calls the subroutine "change_number" passing the address of the variable x as an argument, and finally prints the value of the variable x again:*/

#include<stdio.h>

void change_number(int *x);

int main()
{
  int x;
  printf("Enter the number x: ");
  scanf("%d", &x);
  printf("In the main program: x = %d\n", x);
  change_number(&x);
  printf("In the main program: x = %d\n", x);
}

void change_number(int *a){
	int i = *a;
	int j = i + 3;
	int *s = &j;
	*a = *s;
	
	printf("In the subroutine: x = %d\n", *a);
}

/*output
Enter the number x: 555
In the main program: x = 555
In the subroutine: x = 558
In the main program: x = 558
*/
