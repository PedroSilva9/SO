#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char* argv[]){
  pid_t pid;
  int status;
  for(int i=0; i<10; i++){
    if((pid = fork()) == 0){
      printf("Pid %d\n", getpid());
      printf("Parent pid %d\n", getppid());
      _exit(i);
    }
  }
  for(int i=0; i<10; i++){
    wait(&status);
    printf("Exit code %d\n", WEXITSTATUS(status));
  }
  return 0;
}
