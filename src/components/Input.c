#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "./index.h"

void input(){
  int comand;
  while(1){

    system("clear");
    printf("\nerminal> %d", comand);
    comand = tolower(getch());



    if (comand == 27){ // EXIT = 27
      break;
    }
  }
}

char *worldBuilder(char *letter) {

}
