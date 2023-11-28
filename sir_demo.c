#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
// one parent and three child processes.
int main() {
    int i, pid1, pid2, pid3, s1, s2, s3;

    pid1 = fork();
    if(pid1 == 0) { // first child
        for(i=1; i<=3; i++) {
            printf("dac: %d\n", i);
            sleep(1);
        }
        _exit(0);
    }

    pid2 = fork();
    if(pid2 == 0) { // second child
        for(i=1; i<=3; i++) {
            printf("dmc: %d\n", i);
            sleep(1);
        }
        _exit(0);
    }

    pid3 = fork();
    if(pid3 == 0) { // third child
        for(i=1; i<=3; i++) {
            printf("desd: %d\n", i);
            sleep(1);
        }
        _exit(0);
    }

    for(i=1; i<=5; i++) {
        printf("sunbeam: %d\n", i);
        sleep(1);
    }

    waitpid(pid1, &s1, 0);
    waitpid(pid2, &s2, 0);
    waitpid(pid3, &s3, 0);

    return 0;
}


