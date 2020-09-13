// use conditional compilation
#include <stdio.h>
#define JUST_CHECKING
#define LIMIT 4

int main()
{
    int i;
    int total = 0;

    for (i = 1; i <= LIMIT; i++)
    {
        #ifdef JUST_CHECKING
            printf("i=%d, running total = %d\n", i, total);
        #endif
    }
    printf("Grand total = %d\n", total);
    return 0;
}