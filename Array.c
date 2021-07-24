#include <stdio.h>
#include <stdlib.h> // exit() prototype
#include <limits.h>
char * itobs(int, char *);
void show_bstr(const char *);



int main(void)
{
    
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0'; // assume ASCII or similar
    ps[size] = '\0';

    return ps;
}

