#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);

int main()
{
    int ans;

    ans = sum(7,10,34,56,67,34,67,89);
    printf("ans = %d\n", ans);

    ans = sum(6,36,71,17,98,43,24);
    printf("ans =  %d\n", ans); 
    
    return 0;
}

int sum( int a, ...)
{
    int s, i, num;

    s = 0;
    va_list ap;
    va_start(ap, a);

    for(i = 0; i < a; ++i)
    {
        num = va_arg(ap, int);
        s = s + num;
    }

    va_end(ap);

    return s;
}
