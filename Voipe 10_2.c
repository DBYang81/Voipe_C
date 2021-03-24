/* Write a program that prompts the user for a word (max 15 lower-case letters) and calculates the number of vowels (a, e, i, o, u, y) in the word. Hint:
You have learned to compare the value of a character variable to 'a', for example. You can use an index to refer to single characters in a string array. (char[] = "word"; word[1] == 'a';)*/

#include <stdio.h>
#include <string.h>
int main (void){
	char wordstring[16];
	char vowels[7]= {'a', 'e', 'i', 'o', 'u', 'y','\0'};
	int counter = 0;
	
	printf("The program calculates the number of vowels.\n");
	printf("Enter a word:");
	scanf("%s", &wordstring[0]);
	for(int i = 0; i < strlen(wordstring); i++){
		for(int j = 0; j < 6; j++){
			if(wordstring[i] == vowels[j]){
				counter++;
			}
		}
	}
	printf("The word contains %d vowels.\n", counter);
	return 0;
}

/*output
The program calculates the number of vowels.
Enter a word:test
The word contains 1 vowels.*/
