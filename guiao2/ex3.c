#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char* argv[]){
  pid_t pid;
  int i;
  int status;
  for(i=0; i<10; i++){
    if ((pid = fork()) == 0){
      printf("Process id: %d | Parent process id %d\n", getpid(), getppid());
      _exit(i);
    }
    else{
      wait(&status);
      printf("Exited: %d\n", WEXITSTATUS(status));
    }
  }
  return 0;
}
