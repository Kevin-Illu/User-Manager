#include <stdio.h>
#include <string.h>
#include "./parser.h"

struct Response parser(char *input, struct Response state)
{
  struct Response newState;
  newState.title = state.title;
  newState.message = state.message;
  newState.status = 1;
  newState.statusInfo = "succes";
  int isInvalidComand = 0;

  for (int i = 0; i <= 2; i++)
    {
      if (strcmp(input, "exit") == 0)
      {
        isInvalidComand = 1;
        newState.status = 0;
        newState.statusInfo = "success";
        break;
      } else if (strcmp(input, "clear") == 0)
      {
        clean();
        isInvalidComand = 1;
        newState.statusInfo = "success";
        newState.message ="cleaning...";
        break;
      } else if (strcmp(input, "help") == 0)
      {
        isInvalidComand = 1;
        newState.statusInfo = "info";
        newState.title = "HELP";
        newState.message = 
          "\n\t| clear: limpia la pantalla"
          "\n\t| exit: salir del programa"
          "\n\t| help: lista todos los comandos"
          "\n\t| "
          "\n\t| cuando estes listo puedes escribir" 
          "\n\t| cualquier comando";
        break;
      };
    }

  if (isInvalidComand == 0)
  {
    newState.title = "comando invalido";
    newState.status = 1;
    newState.statusInfo = "error";
    newState.message = "\n\t| por favor ingrese el"
      "\n\t| comando (help) para obtener"
      "\n\t| una lista de los comandos disponibles.";
  }

  return newState;
}
