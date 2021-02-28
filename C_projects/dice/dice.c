#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

void roll();

int main () {
char entry[10];
char * entryf = "start";
printf("Welcome to dice roll. Please type - start - and then press enter: ");
scanf("%s", entry);
for(int i = 0; entry[i]; i++){
  entry[i] = tolower(entry[i]);
}


int d = strcmp(entry, entryf);


if (d == 0){
	roll();
} else {
	printf("Incorrect entry, please try exit and try again");

}

	return 0;
}

void roll (){
	int d1, d2;
	srand(time(NULL));
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	printf("Dice 1: %d \nDice 2: %d \n", d1, d2);

}