// floating-point comparisons
#include <math.h>
#include <stdio.h>

int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    

    while (fabs(response - ANSWER) > 0.0001 && scanf("%lf", &response))
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}