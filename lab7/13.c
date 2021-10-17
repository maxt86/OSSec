#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

extern char** environ;

int main(void)
{
    char** p = environ;
    for ( ; *p && p-environ < 10; ++p)
        printf("%s\n", *p);
}
