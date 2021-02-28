#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int number();

int main() {
char * play;
char * play1;
printf("Hello. Please type -  play  - and hit enter to start: \n");
scanf("%s", play);
int n = number(n);
if (n % 2 == 0 && (n > 0 && n < 11)){
	printf("Your number was: %d Black", n);
}

if (n % 2 == 1 && (n > 0 && n < 11)){
	printf("Your number was: %d Red", n);
}

if (n % 2 == 0 && (n > 18 && n < 29)){
	printf("Your number was: %d Black", n);
}

if (n % 2 == 1 && (n > 18 && n < 29)){
	printf("Your number was: %d Red", n);
}

///////////////////////////////////////////////

if (n % 2 == 0 && (n > 10 && n < 19)){
	printf("Your number was: %d Red", n);
}

if (n % 2 == 1 && (n > 10 && n < 19)){
	printf("Your number was: %d Black", n);
}

if (n % 2 == 0 && (n > 28 && n < 37)){
	printf("Your number was: %d Red", n);
}

if (n % 2 == 0 && (n > 28 && n < 37)){
	printf("Your number was: %d Black", n);
}

if (n == 0){
	printf("Your number was: %d green", n);
}

  return 0;
}

int number(){
	srand(time(NULL));
    int x = rand() % 37;
    return x;
}


