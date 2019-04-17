#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char* argv){
  pid_t pid = getpid();
  pid_t ppid = getppid();
  char str[100];
  sprintf(str,"Pid: %d\nParent pid: %d\n", pid, ppid);
  write(STDOUT_FILENO, str, strlen(str));
  return 0;
}
