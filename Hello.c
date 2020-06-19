#include <stdio.h>

int main()
{
    printf("Hello, Prof \n");
    int fahr, celsius, lower, upper, step;
    
    lower = 0; // lower limit of temperature scale
    upper = 300; // upper limit
    step = 20;

    fahr =  lower;
    while (fahr <= upper)
    {
       celsius = 5 * (fahr - 32) / 9;
       printf("%3d\t%6d\n", fahr, celsius);
       fahr = fahr + step;
    }
    

    return 0;
}