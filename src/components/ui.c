#include <stdio.h>
#include <string.h>
#include "./parser.h"
#include "ui.h"

void printUI(struct State current)
{
  char *init;
  char *error;
  char *info;
  char *success;
  char *tableInfo;

  init = "\t\n"
    "\t    What can i do for you, bro?\n"
    "\t            o                  \n"
    "\t            o                  \n"
    "\t     //@@  o                   \n"
    "\t    @@ \")                     \n"
    "\t   @@@ - @   _____             \n"
    "\t  /  \\ / \\  |\\____\\        \n"
    "\t /  ( X ) | | |   |            \n"
    "\t<___=\\      | |   |           \n"
    "\t    \\======\\ \\|_\"_|        \n"
    "\t                (____          \n";
  error = "\n"
    "\t  WHAT ? ? ? ! ! !    \n"
    "\t             o        \n"
    "\t             o        \n"
    "\t     //@@   o         \n"
    "\t    @@ \")            \n"
    "\t   @@@ ~ @   _____    \n"
    "\t  /  \\ / \\  |\\____\\\n"
    "\t /  ( X ) | | |   |   \n"
    "\t<___=\\      | |   |  \n"
    "\t    \\======\\ \\|_\"_|\n"
    "\t                (____ \n";

  info = "\n"
    "\t    here is the list of commands...\n"
    "\t            o                      \n"
    "\t            o                      \n"
    "\t     //@@  o                       \n"
    "\t    @@-OO                          \n"
    "\t   @@@ ^ @   _____                 \n"
    "\t  /  \\ / \\  |\\____\\            \n"
    "\t /  ( X ) | | |   |                \n"
    "\t<___=\\      | |   |               \n"
    "\t    \\======\\ \\|_\"_|            \n"
    "\t                (____              \n";

  success = "\n"
    "\t  It worked! It worked!  Kiss kiss kiss...\n"
    "\t           o                              \n"
    "\t   //@@  o                                \n"
    "\t  @@ ^^                                   \n"
    "\t @@@   3__ _____                          \n"
    "\t/  \\ / ___|\\____\\                      \n"
    "\t|  \\_____ | |   |                        \n"
    "\t<________B| |   |                         \n"
    "\t  \\======\\ \\|_\"_|                     \n"
    "\t              (____                       \n";
 
  char *img;
  if(strcmp(current.statusInfo, "error") == 0){
    img = error;
  } else if (strcmp(current.statusInfo, "success") == 0){
    img = success;
  } else if (strcmp(current.statusInfo, "info") == 0) {
    img = info;
  } else if (strcmp(current.statusInfo, "init") == 0) {
    img = init;
  }
  printf("%s\n", img);
  printf("\t =========================================\t\n"
         "\t| %s\t\t\t\n"
         "\t =========================================\t\n"
         "\t -----------------------------------------\t\n"
         "\t| %s\t\t\t\n"
         "\t _________________________________________\t\n",
         current.title, current.message
         );
}

