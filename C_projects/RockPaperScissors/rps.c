#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * play(int num);


int main() {
  int select;
  printf("Welcome to rock-paper-scissors. Please type the number corresponding to what you would like to throw and press enter:\n (1) Rock\n (2) Paper\n (3) Scissors\n (0) EXIT\n");
  
  scanf("%u", &select);

  switch (select){

  	case 1:
  	play(1);
  	break;

  	case 2:
  	play(2);
    break;

  	case 3:
  	play(3);
  	break;

  	case 0:
    printf("Invalid selection option, please exit and try again.\n");
  	break;

  	default: 
  	printf("Invalid selection option, please exit and try again.\n");
  	}
  return 0;
}

char * play(int num){
  int cpu;
  char * cpuname;
  char * player;
	
  if (num == 1){
    player = "Rock";
    srand(time(NULL));
    cpu = rand() % 2;
    if (cpu == 0){
      cpuname = "Scissors";
      printf("You threw %s and they threw %s: You Win.\n", player, cpuname);
    }

    if (cpu == 1){
      cpuname = "Paper";
      printf("You threw %s and they threw %s: You Lose.\n", player, cpuname);
    }

}
  if (num == 2){
    player = "Paper";
    srand(time(NULL));
    cpu = rand() % 2;
    if (cpu == 0){
      cpuname = "Rock";
      printf("You threw %s and they threw %s: You Win.\n", player, cpuname);
    }

    if (cpu == 1){
      cpuname = "Scissors";
      printf("You threw %s and they threw %s: You Lose.\n", player, cpuname);
    }

}

  if (num == 3){
    player = "Scissors";
    srand(time(NULL));
    cpu = rand() % 2;
    if (cpu == 0){
      cpuname = "Rock";
      printf("You threw %s and they threw %s: You Lose.\n", player, cpuname);
    }

    if (cpu == 1){
      cpuname = "Paper";
      printf("You threw %s and they threw %s: You Win.\n", player, cpuname);
    }

}

    return player;

}