/* env | head -n$1 */

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

extern char** environ;

int main(void)
{
    if (argc < 2)
        return 1;
    
    char** p = environ;
    for ( ; *p && p-environ < abs(atoi(argv[1])); ++p)
        printf("%s\n", *p);
}
