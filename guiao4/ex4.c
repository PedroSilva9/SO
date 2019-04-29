#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char** argv){

  for (int i = 1; argv[i]; i++) {
    if (argv[i][0] == '-') {
      switch (argv[i][1]) {
        case 'i': {
            int fd = open(argv[++i], O_RDONLY);
            dup2(fd, STDIN_FILENO);
            close(fd);
            break;
        }
        case 'o': {
            int fd = open(argv[++i], O_CREAT | O_WRONLY | O_TRUNC, 0666);
            dup2(fd, STDOUT_FILENO);
            close(fd);
            break;
        }
        default:
            perror("Invalid command");
            break;
      }
    } else
        execvp(argv[i], argv + i);
  }
}
