#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tracks[][80] = {
"I left my heart in Harvard Med School",
"Newark, Newark - a wonderful town",
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima",
};

void find_track(char search_for[])
{

int i;
for (i = 0; i < 5; i++) {
if (strstr(tracks[i], search_for))
printf("Track %i: '%s'\n", i, tracks[i]);
}
}

 

int main()
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data=[");
    while (scanf("%f, %f %79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (started)
            printf(",\n");
        else
            started = 1;
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
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