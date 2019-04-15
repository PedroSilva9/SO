#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char byte;
  ssize_t res;

  while ((res = read (0, &byte, 1)) > 0)
    write (1, &byte, res);

  return 0;
}
