#include <string.h>
#include <unistd.h>

int main(int argc, char** argv){
  int p[2];
  pipe(p);
  int res;
  char buf[100];

  while((res = read(0, buf, 100)) > 0){
    if(!fork()){
      close(p[1]);
      while((res = read(p[0], buf, 100)) > 0){
        write(STDOUT_FILENO, buf, res);
      }
      close(p[0]);
    } else {
      close(p[0]);
      sleep(5);
      write(p[1], buf, res);
      close(p[1]);
    }
  }

  return 0;
}
