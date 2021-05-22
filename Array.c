#include <stdio.h>
#include <stdlib.h>
/* count digits, white space, others */

  void go_south_east(int lat, int lon)
    {
        lat = lat - 1;
        lon = lon + 1;
    }

int main()
{
    int  x = 4;
    printf("x  is stored at %p\n", &x);

    int contestants[] = {1, 2, 3, 4};
    int *choice = contestants;
    contestants[0]= 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf("I'm going to pick contestant number %i\n", contestants[2]);

  


   /* int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != '\n')
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')  
            ++nwhite;
        else 
            ++nother;
    printf("digits = ");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
    printf("%d", ndigit[c - '0']);*/
    return 0;
}