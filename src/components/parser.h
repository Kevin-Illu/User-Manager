#pragma once

struct Response {
  char *title;
  int status;
  char *message;
  char *statusInfo;
};

struct Response parser(char *, struct Response);
