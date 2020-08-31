// alters input, preserving spaces
#include <stdio.h>
#define SPACE ' ' // that's quote-space-quote

int main(void)
{
    char ch;

    ch = getchar(); // read a character
    while (ch != '\n') // while not end of line
    {
        if (ch == SPACE)
            putchar(ch); // character unchanged
        else 
            putchar(ch + 1); // change other characters
        ch = getchar(); // get next character
    }
    return 0;
}
