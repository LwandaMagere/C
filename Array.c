#include <stdio.h>
/* count digits, white space, others */
int main()
{
     puts("C Rocks Bana!\n\n");

     int card_count = 11;
     if (card_count > 10)
        puts("The deck is hot. Increase bet.\n");

    int decks;
    puts("Enter a number of decks\n");
    scanf("%i", &decks);
    if (decks < 1)
    {
        puts("That is not a valid number of decks\n");
        return 1;
    }
    printf("There are %i cards\n", (decks * 52));
    
    int c = 10;
    while (c > 0)
    {
        puts("I must not write code in class\n");
        c = c -1;
    }

    char ex[20];
    puts("Enter boyfriend's name: \n");
    scanf("%19s", ex);
    printf("Dear %s.\n\n\tYou're history.\n", ex);

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