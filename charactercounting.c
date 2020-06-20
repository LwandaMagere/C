#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
   /* long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);  */

   /*  double nc;

   for (nc = 0; getchar() != '\n'; ++nc)
    ;
    printf("%.0f\n", nc);

    /* count lines in input */

    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);

    return 0;
}