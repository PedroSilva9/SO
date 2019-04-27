#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv){
  execlp("ls","ex1","-l",NULL);
  perror("The execution of your program went wrong!");
  return 0;
}
