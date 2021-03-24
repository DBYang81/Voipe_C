/*Write a program that calculates the number of hours worked within a specific period and prints the total number of hours, the average length of a day and an itemisation of the hours entered. First, the program must ask how many days of working hours shall be entered (max 30 days). After this, the program asks for the daily working hours. The program output shall have one decimal place of precision.*/

#include <stdio.h>

int main (void){
	int num, index;
	printf("The program calculates the total hours worked during\n a specific period and the average length of a day.\n\n");
	printf("How many days: ");
	scanf("%d", &num);
	float array[num], sum = 0;
	for(index=0; index < num; index++){
		printf("Enter the working hours for day %d: ", index+1);
		scanf("%f",&array[index]);	
		sum += array[index];
	}
	printf("\n\n");
	printf("Total hours worked: %.1f\n",sum);
	float average;
		average = sum / num;
		printf("Average length of day: %.1f\n", average);
		printf("Hours entered:");
	for(index=0; index < num; index++){
		printf("%.1f ", array[index]);
	}
}

/*output
The program calculates the total hours worked during
a specific period and the average length of a day.

How many days:3
Enter the working hours for day 1:5.5
Enter the working hours for day 2:6.6
Enter the working hours for day 3:7.7

Total hours worked: 19.8
Average length of day: 6.6
Hours entered: 5.5 6.6 7.7 */
