/*Write a program that prints all the numbers in the phone directory to the screen. The file for reading the numbers is the same as in the previous exercise (phonedir.txt). Upon execution, the program opens the file, reads the data and prints it.*/

#include <stdio.h>
struct person {
		char firstname[20];
		char lastname[20];
		char telephone[20];
	};

int main (void){
	int num = 0;
	FILE *read_file;
	struct person personlist[50];
	
	read_file = fopen("phonedir.txt", "r");
	fscanf(read_file, "%d",&num);
	
	for(int i = 0; i < num; i++){
		fscanf(read_file, "%s %s %s", &personlist[i].firstname[0], &personlist[i].lastname[0],
		   &personlist[i].telephone[0]);
		printf("%s %s %s\n", personlist[i].firstname, personlist[i].lastname, personlist[i].telephone);
	}
	fclose(read_file);
	return 0;
}

/*output
Brita Smith 05-4567393
Thomas Jefferson 05-6243370
*/
