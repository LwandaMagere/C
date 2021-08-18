#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#define DENSITY 62.4

int main()
{
    int32_t me32;
    
    me32 = 345654654;
    printf("me32 = %" PRId32 "\n", me32);
    
    return 0;
}