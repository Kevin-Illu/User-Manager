#include <stdio.h>
#include <string.h>
#include "./parser.h"
#include "./ui.h"


void cleanScreen(int distance)
{
  while (distance > 0)
    {
      printf("\n");
      distance--;
    }
}

void terminalF()
{
  char input[100];
  struct Response terminal;
  terminal.title = "USER MANAGER";
  terminal.message = "comandos integrados: "
    "\n\t* -- clear."
    "\n\t* -- exit."
    "\n\t* -- help.";
  terminal.status = 1;
  terminal.statusInfo = "init";
  char *statusTerm[3] = {"error", "success", "info"};

  while (terminal.status == 1)
    {
      cleanScreen(40);
      printUI(terminal);

      for(int i = 0; i <= 2; i++){
        if (strcmp(terminal.statusInfo, statusTerm[i]) == 0){
          terminal.title = "USER MANAGER";
          terminal.message = "comandos integrados: "
            "\n\t* -- clear."
            "\n\t* -- exit."
            "\n\t* -- help.";
          terminal.status = 1;
          terminal.statusInfo = "init";
          sleep(2);
          cleanScreen(40);
          printUI(terminal);
          break;
        }
      }

      printf("\t> ");
      scanf("\n%s", input);
      terminal = parser(input, terminal);
    }
}
