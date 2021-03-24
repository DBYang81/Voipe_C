/*The C program below receives integers as command line arguments. After receiving the required values, the program calls the subroutine "calculate_and_print" which receives an array and its size passed by the main program, prints the numbers on the screen and prints their sum on the screen.*/

#include <stdio.h> 
#include <stdlib.h>

void calculate_and_print(int *, int);

int main(int argc, char *argv[])
{
  int x, sum=0, size=5, array[5];
  if(argc == 6){ 
  /* Program name and command line parameters */
    for(x=0;x<argc-1;x++){
     array[x] = atoi(argv[x+1]);
    }
    calculate_and_print(array, size);
  }else{
    printf("Incorrect number of command line arguments\n");
  }
  return 0;
}

void calculate_and_print(int *a, int b){
	int sum = 0;
	printf("Elements of the array: ");
	for(int i = 0; i < b; i++){
		sum += a[i];
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("Sum = %d\n", sum);
}

/*output
Elements of the array: 43 53 654 65 77
Sum = 892
*/
