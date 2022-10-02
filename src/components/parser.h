#pragma once

struct State {
  char *title;
  int status;
  char *message;
  char *statusInfo;
};

struct State parser(char *, struct State);
