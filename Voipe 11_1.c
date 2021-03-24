/*In this chapter, we create independent programs that are closely associated with each other. All the programs are components of a phone directory program. The intention is that you can continue your programming exercises by programming a phone directory. The exercises in this chapter can easily be converted into functions for a larger entity.

The name and number data for the phone directory are contained in the file "phonedir.txt" which has the following format:

4
Firstname Lastname 050-3500980
John Doe 041-3478924
Brian Smith 040-3980982
Brita Smith 05-4567393

The first line of the file indicates the number of names added to the directory as an integer. The first name, last name and telephone number are processed in text format. The data items are separated by spaces in the file, and the length of an individual item (such as a first name) may be no more than 20 characters. Each line includes the information for one person only. The directory may contain a maximum of 50 people. Your first task is to write a program for adding a new telephone number to the directory. Upon execution, the program must first ask for a first name, after which it prompts for a last name and a telephone number. When data is saved, the value on the first line of the file must increase by one. Note that in order to simplify the exercise, the data to be entered may not include a newline character, for example. Each personal data item is stored on its own line. (Remember the newline character.)*/

#include <stdio.h>
int main (void){
	int i;
	FILE *phonedir;
	//char *register[] = "phonedir.txt";
	
	struct person{
		char firstname[20];
		char lastname[20];
		char telephone[20];
	};
	
	struct person person_list[50];
	
		printf("Enter first name:");
		scanf("%s", &person_list[0].firstname[0]);
		printf("Enter last name:");
		scanf("%s", &person_list[0].lastname[0]);
		printf("Enter telephone number:");
		scanf("%s", &person_list[0].telephone[0]);
		//printf("\n");
	
	phonedir = fopen("phonedir.txt", "w");
	for(i = 0; i < 50; i++){
		fprintf(phonedir, "%d\n", i);
		fprintf(phonedir, "%s %s %s", person_list[i].firstname, person_list[i].lastname, person_list[i].telephone);
		fprintf(phonedir, "\n");
	}
	fclose(phonedir);
	//printf("\n");
	printf("Successfully saved the data.\n");
	return 0;
}

/*output
Enter first name:Thomas
Enter last name:Jefferson
Enter telephone number:05-6243370
Successfully saved the data.
*/
