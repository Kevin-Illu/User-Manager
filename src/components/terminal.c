#include <stdio.h>
#include <string.h>

void cleanScreen(int distance) {
  while(distance > 0) {
    printf("\n");
    distance--;
  }
}

int inputParser(char* input, char* comand) {
  if(strlen(input) > 5){return 0;}
  if(strcmp(input, comand) == 0) {
    return 0;
  }

  // el comando no existe en la lista
  return 1;
}

void terminal () {
  char* comands[3] = {"exit", "add", "view"}; 
  int exit = 1;
  char input[100];
  int res;

  while(exit == 1) {
    cleanScreen(10);
    printf("> ");
    scanf("\n%s", input);

    for(int i = 0; i < 3; i++){
      char* comand = comands[i];
      res = inputParser(input, comand);

      if(res == 0) {
        exit = res;
        break;
      }
    }
    /* exit = 0; */
  }
}
