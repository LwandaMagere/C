#include <stdio.h>

// count characters in input; 1st version
int main()
{
    long nc;
    nc = 0;
    while (getchar() != '\n')
        ++nc;
    printf("%ld\n", nc);
    return 0;
}