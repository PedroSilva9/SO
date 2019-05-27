#include <string.h>
#include <unistd.h>

int main(int argc, char** argv){
  int p[2];
  pipe(p);
  int res;
  char buf[100];
  if(!fork()){
    while((res = read(p[0], buf, 100)) > 0){
      write(STDOUT_FILENO, buf, res);
    }
    close(p[0]);
  } else {
    sleep(5);
    write(p[1], "Uma string\n", strlen("Uma string\n"));
    close(p[1]);
  }

  return 0;
}
