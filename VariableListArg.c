#include <stdio.h>
#include <stdarg.h> // note this hearder

int sum(int, ...);

int main()
{
    int ans;

    ans = sum(7,10,34,56,67,34,67,89); // you can change 7 to 1 and 89 to 0 to let the compiler count arguments between
    printf("ans = %d\n", ans);          // add any numbers of arguments as you want

    ans = sum(6,36,71,17,98,43,24);  // you can change 6 to 1 AND 24 to 0 to let the compiler coount arguments between
    printf("ans =  %d\n", ans);       // add any numbers of arguments as you want

    return 0;
}

// va_list
// void va_start(va_list v, last)
// type va_arg(va_list v, type);
// void va_end(va_list v);
// va_copy(va_list des, va_list src);

int sum(int a, ...)
{
    int s = 0, i, num;
    va_list var, v2;
    va_start(var, a);
    va_copy(v2, var);

    for ( i = 0; i < a; i++)
    {
        num = va_arg(v2, int);
        s = s + num;
    }

  /*  while (1)
    {
        num = va_arg(var, int);
        if (num == 0)
            break;
        else 
            s = s + num;
    }*/
    va_end(var); // deallocating memory
    va_end(v2);
    return s;
}