#include <stdio.h>

int main()
{
    char first_name[20];
    char last_name[20];

    char *cards="JQK";

    puts("Enter the first name: ");
    scanf("%19s %19s", first_name, last_name);
    printf("First: %s Last:%s\n", first_name, last_name);
    return 0;
}