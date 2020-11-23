#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid == -1)
    {
        perror("fork failed");
    }
    else if (pid != 0)
    {
        printf("PID is %ld, child process pid is %ld\n", getpid(), pid);
    }
    else
    {
        printf("PID is %ld, parent process pid is %ld\n", getpid(), getppid());
    }
    return 0;
}