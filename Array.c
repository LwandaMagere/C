#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char line[80];
    FILE *in = fopen("sppoky.csv", "r");
    FILE *file1 = fopen("ufos.csv", "w");
    FILE *file2 = fopen("disappearance.csv", "w");
    FILE *file3 = fopen("others.csv", "w");
    while (fscanf(in, "%79[^\n]", line) == 1)
    {
        if (strstr(line, "UFO"))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, "Disappearance"))
            fprintf(file2, "%s\n", line);
        else 
            fprintf(file3, "%s\n", line);
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);




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