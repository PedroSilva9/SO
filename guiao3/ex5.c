#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main (int argc, char **argv){
  int status;
  for (int i=1; i<argc; i++){
    if (!fork()){
      execl (argv[i], argv[i], NULL);
      perror("Failed.");
      _exit(0);
    }
    else
      wait(&status);
  }
	return 0;
}
