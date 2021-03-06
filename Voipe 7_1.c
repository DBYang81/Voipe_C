/*Your task is to supplement the source code below with the missing functions. The program prints the following text in accordance with the user's selections:

Choice 1: "The cat says meow!"
Choice 2: "The dog says wuff-wuff!"
Choice 3: "The cow says moo!"
*/

#include <stdio.h>

void cat(void);
void dog(void);
void cow(void);

int main()
{
  int choice;
  do{

    printf("1:cat\n2:dog\n3:cow\n");
    printf("End with a negative number.\n");
    printf("Select animal:");
    scanf("%d", &choice);
    if(choice < 0) {
      printf("Terminating the program...");
    }
    else if(choice == 1) {
      cat();
    }
    else if(choice == 2) {
      dog();
    }
    else if(choice == 3) {
      cow();
    }
    else {
      printf("You entered an invalid number.\n\n");
    }
  }while(choice>0);

  return 0;
}

void cat (void){
	printf("The cat says meow!\n");	
}

void dog (void){
	printf("The dog says wuff-wuff!\n");	
}

void cow (void){
	printf("The cow says moo!\n");	
}


/*ouput
1:cat
2:dog
3:cow
End with a negative number.
Select animal:1
The cat says meow!

1:cat
2:dog
3:cow
End with a negative number.
Select animal:2
The dog says wuff-wuff!

1:cat
2:dog
3:cow
End with a negative number.
Select animal:3
The cow says moo!

1:cat
2:dog
3:cow
End with a negative number.
Select animal:-1
Terminating the program...
*/
