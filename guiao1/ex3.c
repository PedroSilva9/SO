#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  int size;
  if (argc <= 1){
    perror("Não foi recebido input. A sair do programa..");
    exit(0);
  }
  else
    size = atoi(argv[1]);
  char byte[size];
  ssize_t res;

  while ((res = read (STDIN_FILENO, byte, 100)) > 0)
    write (STDOUT_FILENO, byte, res);

  return 0;
}
