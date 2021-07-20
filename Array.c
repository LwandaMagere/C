#include <stdio.h>
#include <limits.h>   // for CHAR_BIT, # of bits per char


int main(void)
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
    
    
    return 0;
}

