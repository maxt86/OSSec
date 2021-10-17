/* env | wc -l*/

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

extern char** environ;

int main(void)
{
	int nenv = 0;
    
	char** p = environ;
	while (*p++)
        ++cnt;

	printf("num of env vars: %d\n", nenv);
}
