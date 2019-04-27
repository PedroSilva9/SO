#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv){
  execv("3.out", argv);
  return 0;
}
