/*Write a program for removing a specific person's data from the directory. The program asks for a first name followed by a last name. The program checks if the person's data can be found. If the person is in the directory, the data is removed. Otherwise print an error message.*/

#include <stdio.h>
#include <string.h>
struct person{
	char firstname[20];
	char lastname[20];
	char telephone[15];
};

int main (void){
	char fname[20];
	char lasname[20];
	int fcmp, lascmp, num;
	
	struct person persondata[50];
	FILE *phonebook;
	phonebook = fopen("phonedir.txt", "w");
	fscanf(phonebook, "%d ", &num);

	for(int i = 0; i < num; i++){
		fscanf(phonebook, "%s %s %s", &persondata[i].firstname[0], &persondata[i].lastname[0], &persondata[i].telephone[0]);
	}
	printf("Enter first name:");
	scanf("%s", &fname[0]);
	printf("Enter last name:");
	scanf("%s", &lasname[0]);
	
	for(int i = 0; i < num; i++){
		fcmp = strcmp(fname, persondata[i].firstname);
		lascmp = strcmp(lasname, persondata[i].lastname);

		if(fcmp != 0 && lascmp != 0){
			fprintf(phonebook, "%s %s %s", persondata[i].firstname, persondata[i].lastname, persondata[i].telephone);
		}
	}
  fclose(phonebook);
	printf("Data removed from the directory.\n");
	return 0;
}

/*output
Enter first name:Tim
Enter last name:Franklin
Data removed from the directory.
*/
