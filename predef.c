// predefined identifiers
#include <stdio.h>

void why_me();

int main(void)
{
    printf("The file is %s.\n", __FILE__);
    return 0;
}

void why_me()
{
    printf("This function is %s\n", __func__);
    printf("This is a line %d.\n", __LINE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time is %s.\n", __TIME__);
    printf("The version is %ld.\n", 3TDC_VERSION__);
    printf("This is line %d.\n", __LINE__);
    printf("This function is %s\n", __func__);
    why_me();
}