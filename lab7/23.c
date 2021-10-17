#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int main(void)
{
    int pid = fork();
    
    for (int i = 0; i < 10; ++i)
        if (pid)
            fork();
    
    sleep(5);
}
