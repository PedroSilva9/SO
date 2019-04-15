#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ex5.h"

int main (int argc, char* argv[]){
  if (argc == 1){
    perror("Nenhum descritor indicado.");
    return 1;
  }

  int fd = open(argv[1], O_RDONLY);
  char buf[1024];
  ssize_t size;
  int i = 1;
  while ((size = readln(fd,buf,1024)) > 0){
    printf("%6d %s", i, buf);
    i++;
  }
  return 0;
}
