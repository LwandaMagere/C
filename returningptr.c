#include <stdio.h>

int * findMid(int *, int );

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int * mid = findMid(a, n);
    printf("%d\n", *mid);

    int * p = 1000;
    return 0;
}

int * findMid(int a[], int n)
{
    return &a[n/2];
}