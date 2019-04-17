#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

int main (int argc, char* argv[]){

  int fd;

  if (argc == 1)
    fd = STDIN_FILENO;
  else
    fd = open(argv[1], O_RDONLY);

  char buf[1024], lin[20];
  ssize_t size;
  int i = 1;
  while ((size = readln(fd,buf,1024)) > 0){
    if (size != 1){
      sprintf(lin, "\t%d  ",i);
      write(STDOUT_FILENO, lin, strlen(lin));
      if (buf[size -1] == '\n')
        i++;
    }
    write(STDOUT_FILENO, buf, size);
  }
  return 0;
}
