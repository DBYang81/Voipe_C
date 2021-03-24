/*Write a program that prompts the user for an amount in Finnish markka and converts it to euro. Finally, the program prints the amount on the screen in euro with two decimal places of precision. The euro conversion factor is 5.94573.
  */

#include <stdio.h>
int main (void)
{
	float fin_markka, converted_euro;
	float conversion_factor = 5.94573;
	printf("Enter an amount in FIM: ");
	
	scanf("%f", &fin_markka);
	converted_euro=fin_markka/conversion_factor ;
	
	printf("FIM converted to euro:%.2f\n", converted_euro);
}


#output
Enter an amount in FIM:9.90
FIM converted to euro: 1.67
