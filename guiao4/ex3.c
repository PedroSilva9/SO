#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv){

  int std_in = open("/etc/passwd", O_RDONLY);
  dup2(std_in, STDIN_FILENO);

  int std_out = open("saida.txt", O_CREAT | O_TRUNC | O_WRONLY, 0666);
  dup2(std_out, STDOUT_FILENO);

  int std_err = open("erros.txt", O_CREAT | O_TRUNC | O_WRONLY, 0666);
  dup2(std_err, STDERR_FILENO);

  close(std_in);
  close(std_out);
  close(std_err);

  execlp("wc", "3.out", NULL);

  return 0;
}
