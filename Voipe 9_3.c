/*The files "mata.txt" and "matb.txt" contain integer matrices of size 10 x 10. Write a program that calculates the sum of the matrices in a new matrix. The resulting sum matrix shall be saved to the file "sum.usr".

The matrix elements are separated by spaces and newlines. For example:

1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19 20
... ... ...
... ... ...
91 92 93 94 95 96 97 98 99 100
The sum matrix must be saved in the same format. At the end, the program prints a message indicating successful completion.*/

#include <stdio.h>
int main(void){
	int mata[10][10];
	int matb[10][10];
	int sum[10][10];
	
	
	FILE *mata_file = fopen("mata.txt", "r");
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(j == 10){
				fscanf(mata_file, "%d\n", &mata[i][j]);
			}else{
				fscanf(mata_file, "%d ", &mata[i][j]);	
			}
		}
	}
	fclose(mata_file);
	
	FILE *matb_file = fopen("matb.txt", "r");
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(j == 10){
				fscanf(matb_file, "%d\n", &matb[i][j]);
			}else{
				fscanf(matb_file, "%d ", &matb[i][j]);	
			}
		}
	}
	fclose(matb_file);
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			sum[i][j] = 0;
			sum[i][j] = mata[i][j] + matb[i][j];
		}	
	}
	
	FILE *sum_file = fopen("sum.usr", "w");
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(j == 10){
				fprintf(sum_file, "%d\n", sum[i][j]);
			}else{
				fprintf(sum_file, "%d ", sum[i][j]);	
			}		
		}
	}
	fclose(sum_file);
	printf("The sum of the matrices has been calculated into the file sum.usr.\n");
	return 0;
}

/*output
The sum of the matrices has been calculated into the file sum.usr.
*/
