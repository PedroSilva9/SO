#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE   1024
#define SIZE_TO_WRITE 10*1024*1024
/*
int main(int argc, char* args[]){
  int fd;
  char chr = 'a';
  fd = open("10mb.cat", O_CREAT | O_TRUNC | O_WRONLY, 0777);
  for (int i=0; i< SIZE_TO_WRITE; i++)
    write(fd,&chr,1);
  close(fd);
  return 0;
}
*/
//  OU

void populateBuffer(char* buffer, int buffer_size){
  for (int i=0; i<buffer_size; i++)
    buffer[i] = 'a';
}

int main(int argc, char* args[]){
  int fd;
  char buffer[BUFFER_SIZE];

  populateBuffer(buffer,BUFFER_SIZE);
  fd = open("10mb.cat", O_CREAT | O_TRUNC | O_WRONLY, 0777);
  for (int i=0; i< SIZE_TO_WRITE / BUFFER_SIZE; i++)
    write(fd,&buffer,BUFFER_SIZE);
  close(fd);
}
