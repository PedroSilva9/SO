#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char* argv[]){
  pid_t pid;

  if ((pid = fork()) == 0){
    puts("[Informações do filho]");
    printf("Este é o meu id %d e este é o id do meu pai %d\n", getpid(), getppid());
    _exit(0);
  }
  else{
    puts("[Informações do pai]");
    printf("Este é o meu id %d, este é o id do meu pai %d e este é o id do meu filho %d\n", getpid(), getppid(), pid);
  }
  return 0;
}
