#include <stdio.h>

int main()
{
    float sum, v;

    sum = 0;
    while (scanf("%f", &v) == 1)
        printf("\t%.2f\n", sum += v);
    return 0;
}