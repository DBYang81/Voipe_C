/*
Write a program that asks for the user's first and last name and saves these into a file named by the user.
The program must start by asking for the first name. The last name is entered next, followed by the desired file name. The first part of the file name may have a maximum of 8 characters and the second part may have 3 (for example: personal.usr). The file must reside in the same directory as the program.*/

#include <stdio.h>
int main (void){
	char first_name[15], last_name[20];
	char filename[13];
	
	printf("The program saves your first and last name into a file.\n");
	printf("Enter your first name: ");
	scanf("%s", &first_name[0]);
	printf("Enter your last name: ");
	scanf("%s", &last_name[0]);
	printf("File where you want to save your name: ");
	scanf("%s", &filename[0]);
	
	strcat(first_name, last_name);
	
	FILE *file = fopen(filename, "w");
	fprintf(file, first_name);
	fclose(file);
	printf("\n\n");
	printf("Successfully saved the data!");
	return 0;
}

/*output
The program saves your first and last name into a file.
Enter your first name:Thomas
Enter your last name:Jefferson
File where you want to save your name:personal.usr

Successfully saved the data!
*/
