#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int main(void)
{
    if (!fork())
        printf("child pid: %d, parent pid: %d", getpid(), getppid());
}
