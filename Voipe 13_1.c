/*Your task is to write a subroutine that takes a pointer to the first element of an integer array, as well as an integer variable. The arguments are passed to the subroutine in this order. The integer variable passed as an argument holds the number of elements in an array, while the actual array holds the number of integers specified by the variable.
The subroutine must go through the table and return the address of the element holding the smallest value to the calling program. After receiving the address, the main program uses it to print the smallest number contained in the array.
The prototype of the subroutine is the following:
int *address_of_smallest_value(int *numbers, int size);
In the above, the * operator indicates that the function's return value is a pointer.*/

#include <stdio.h>

int *address_of_small_value(int *number, int size);

int main (void){
  int number [] = {21, 55, 5, 3, 43};
  int size = 5;
  int *smallest = address_of_small_value(number, size);
  printf("The smallest number in the array is: "%d", *smallest);
  return 0;
}

int *address_of_smallest_value(int *numbers, int size){
	int min = numbers[0];
	int *p;
	for(int i = 0; i < size; i++){
		int nxt = numbers[i];
		if(nxt < min){
			 min = nxt;	
		}
			p = &min;
	}
	return p;
}

/*output
The smallest number in the array is: 3
*/
