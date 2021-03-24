Write a program that first asks the user whether they drink coffee or tea and then how many cups a day. Finally, the program prints a statement in accordance with the following instructions: Coffee 0 to 2 cups: "You don't drink a lot of coffee, do you?", coffee 3-20 cups: "You drink a lot of coffee!", Tea 0-2 cups: "You do not drink a lot of tea.", tea 3-20 cups: "You drink a lot of tea!", Otherwise "An error occurred in the program!" The number of cups shall be processed as an integer variable and the drink as a character variable (c/t). You do not need to account for upper case letters.
  
#include <stdio.h>
int main (void){
	char answer;
	int num;
	printf("Do you drink coffee or tea (c/t)?");	
	scanf("%c", &answer);
	
	if(answer == 'c'){
		printf("How many cups do you drink daily: ");
		scanf("%d", &num);
		if((0 <= num) && (2 >= num)){
			printf("You don't drink a lot of coffee, do you?");
		}else if((3 <= num) && (20 >= num)){
			printf("You drink a lot of coffee!");	
		}
	}else if(answer == 't'){
		printf("How many cups do you drink daily: ");
		scanf("%d", &num);
		if((0 <= num) && (2 >= num)){
			printf("You do not drink a lot of tea");	
		}else if((3 <= num) && (20 >= num)){
			printf("You drink a lot of tea!");	
		}
	}else if(answer != 'c' || answer != 't'){
		printf("How many cups do you drink daily: ");
		scanf("%d", &num);
		if(num > 20){
			printf("An error occurred in the program!");	
		}
	}
}

#output
Do you drink coffee or tea (c/t)?s
How many cups do you drink daily:55
An error occurred in the program!
