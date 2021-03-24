/*The following is the initialisation of a 5 x 5 integer array:

int matrix[5][5] =
{
4, 6, 25, 88, 5,
34, 5, 300, 4, 65,
78, 43, 11, 90, 125,
98, 585, 12, 63, 21,
45, 35, 9, 5, 1
};
Copy the initialisation into a program that prints the array on the screen and calculates the sum of the elements. Each line shall be followed by a newline character.*/

#include <stdio.h>
int main (void){
	int matrix[5][5] = {
		4, 6, 25, 88, 5,
		34, 5, 300, 4, 65,
		78, 43, 11, 90, 125,
		98, 585, 12, 63, 21,
		45, 35, 9, 5, 1
	};
	int sum = 0;
	printf("In the array: \n");
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			sum += matrix[i][j];
			if(j == 4){
				printf("%d\n", matrix[i][j]);
			}else{
				printf("%d ", matrix[i][j]);	
			}
		}
	}
	printf("\n\n");	
	printf("the sum of the elements is %d", sum);
}

/*output
In the array:
4 6 25 88 5 
34 5 300 4 65 
78 43 11 90 125 
98 585 12 63 21 
45 35 9 5 1 


the sum of the elements is 1757
*/
