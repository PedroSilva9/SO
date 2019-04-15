#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

int main(int argc, char* argv[]){
  char buf[100];
  ssize_t size;
  int fd;
  if(argc == 1)
    fd = 0;
  else
    fd = open(argv[1], O_RDONLY);
  size = readln(fd, buf, 100);
  write(STDOUT_FILENO, buf, size);
  return 0;
}
