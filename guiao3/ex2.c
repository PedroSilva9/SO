#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(int argc, char** argv){
  if(!fork()){
    execlp("ls","ex2","-l",NULL);
    perror("The execution of your program went wrong!");
    _exit(0);
  }
  return 0;
}
