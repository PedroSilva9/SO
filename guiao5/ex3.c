#include <unistd.h>

int main(){
    int p[2];
    char buf[1024];
    pipe(p);
    if (!fork()) {
        dup2(p[0], 0);
        close(p[1]);
        execlp("wc", "wc", NULL);
    }
    int res;
    close(p[0]);
    while ((res = read(0, buf, 1024)) > 0)
        write(p[1], buf, res);
    close(p[1]);
    return 0;
}
