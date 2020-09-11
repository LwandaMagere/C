/* simple preprocessor example */
#include <stdio.h>
#define TWO 2 /* you can use comments if you like */
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde" /*a backlash continues a definition*/
                    /*to the next line             */
#define FOUR TWO*TWO
#define PX printf("X is %d..\n",x)

int main()
{
    int x =  TWO;

    PX;
    x = FOUR;
    printf("%i", x);
    printf("%s\n", OW);
    printf("TWO: ow\n");

    return 0;
}