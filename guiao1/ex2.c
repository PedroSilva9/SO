#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char byte;
  ssize_t res;

  while ((res = read (STDIN_FILENO, &byte, 1)) > 0)
    write (STDOUT_FILENO, &byte, res);

  return 0;
}
