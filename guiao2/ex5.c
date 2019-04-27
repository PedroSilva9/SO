#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
  pid_t pid;
  for(int i=0; i<10; i++){
    if((pid = fork()) == 0)
      printf("Pid = %d\nParent pid = %d\n", getpid(), getppid());
    else{
      wait(&pid);
      _exit(0);
    }
  }
  return 1;
}
