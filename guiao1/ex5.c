#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t readln(int fildes, void* buf, ssize_t nbyte){
  ssize_t size;
  int res;
  char byte;
  char *buffer = (char*)buf; // casting void*
  while ((res = read(fildes,&byte,1) > 0) && size < nbyte){
    buffer[size++] = byte;
    if (byte == '\n')
      return size;
  }
  return size;
}

int main(int argc, char* argv[]){
  char buf[100];
  ssize_t size;
  int fd;
  if(argc == 1)
    fd = 0;
  else
    fd = open(argv[1], O_RDONLY);
  size = readln(fd, buf, 100);
  write(1, buf, size);
  return 0;
}
