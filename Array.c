#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 

int main()
{
    int card_count = 11;
    if (card_count > 10)
        puts("The deck is hot. Inrease bet");

    int c =  10;
    while (c > 0)
    {
        puts("I must not write code in class");
        c = c - 1;
    }

    char ex[20];
    puts("Enter girlfriend's name: ");
    scanf("%19s", ex);
    printf("Dear %s.\n\n\tYou're So Blessed.\n", ex);

    char suit = 'H';
    switch(suit)
    {
        case 'C':
            puts("Clubs");
            break;
        case 'D':
            puts("Diamond");
            break;
        case 'H':
            puts("Hearts");
            break;
        default:
            puts("Spades");
    }

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