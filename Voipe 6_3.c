//Write a program that asks for the students'exam scores (using integers 4 to 10) and calculates the average. The program must accept scores until entry is terminated by a negative integer. Finally, the program prints out the number of scores and the calculated average with two decimal places of precision.
  
#include <stdio.h>
int main (void){
	printf("The program calculates the average of scores you enter.\n");
	printf("End with a negative integer.\n");
	int i, sum = 0;
	int counter = 0;
	do{
		printf("Enter score (4-10):");
		scanf("%d", &i);
		if(i < 0){
			break;	
		}
		counter++;
		sum+=i;
	}
	while ((i >= 4)&&(i <= 10));
	
	float average = (float)sum/counter;
	printf("You entered %d scores.\n", counter);
	printf("Average score: %.2f\n", average);
	return 0;
}

/*#output
The program calculates the average of scores you enter.
End with a negative integer.
Enter score (4-10):7
Enter score (4-10):8
Enter score (4-10):9
Enter score (4-10):10
Enter score (4-10):4
Enter score (4-10):4
Enter score (4-10):5
Enter score (4-10):-1
You entered 7 scores.
Average score: 6.71
*/
