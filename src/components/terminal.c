#include <stdio.h>
#include <string.h>
#include "./parser.h"
#include "./ui.h"

struct Response initState();
void clean();

void terminalF()
{
  char input[100];
  struct Response terminal;
  terminal = initState();
  char *statusTerm[3] = {"error", "success", "info"};

  while (terminal.status == 1)
    {
      clean();
      printUI(terminal);
      for(int i = 0; i <= 2; i++){
        if(strcmp(terminal.statusInfo, "info") == 0){
          break;
        }
        if (strcmp(terminal.statusInfo, statusTerm[i]) == 0){
          terminal = initState();
          sleep(2);
          clean();
          printUI(terminal);
          break;
        }
      }
      printf("\t> ");
      scanf("\n%s", input);
      terminal = parser(input, terminal);
    }
}
struct Response initState() 
{
  struct Response newState;
  newState.title = "USER MANAGER";
  newState.message = "comandos integrados: "
    "\n\t|-----------------------------------------"
    "\n\t| clear."
    "\n\t| exit."
    "\n\t| help.";
  newState.status = 1;
  newState.statusInfo = "init";

  return newState;
};

void clean()
{
  int distance = 0;
  while (distance < 40)
    {
      printf("\n");
      distance++;
    }
}
