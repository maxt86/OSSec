#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

extern char** environ;

int main(int argc, char** argv)
{
	int nenv = 0;
    
	char** p = environ;
	while (*p++)
        ++cnt;

	printf("num of env vars: %d, num of args: %d\n", nenv, argc);
}
