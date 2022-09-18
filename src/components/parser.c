#include <stdio.h>
#include <string.h>
#include "./parser.h"

void clean_func()
{
  int contador = 0;
  while (contador <= 40)
    {
      printf("\n");
      contador++;
    }
}

struct Response parser(char *input, struct Response terminalS)
{
  struct Response newRes;
  newRes.title = terminalS.title;
  newRes.message = terminalS.message;
  newRes.status = 1;
  newRes.statusInfo = "succes";
  int isValidComand = 1;

  for (int i = 0; i <= 2; i++)
    {
      if (strcmp(input, "exit") == 0)
      {
        isValidComand = 0;
        newRes.status = 0;
        newRes.statusInfo = "success";
        break;
      } else if (strcmp(input, "clear") == 0)
      {
        clean_func();
        isValidComand = 0;
        newRes.status = 1;
        newRes.statusInfo = "success";
        break;
      } else if (strcmp(input, "help") == 0)
      {
        isValidComand = 0;
        newRes.status = 0;
        newRes.statusInfo = "info";
        newRes.title = "Comand List";
        newRes.message = 
          "\n\t| clear: limpia la pantalla";
          "\n\t| exit: salir del programa";
          "\n\t| help: lista todos los comandos";
        break;
      };
    }

  if (isValidComand == 1)
  {
    newRes.title = "comando invalido";
    newRes.status = 1;
    newRes.statusInfo = "error";
    newRes.message = "\n\t| por favor ingrese el"
      "\n\t| comando (help) para obtener"
      "\n\t| una lista de los comandos disponibles.";
  }

  return newRes;
}
