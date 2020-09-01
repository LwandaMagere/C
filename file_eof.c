// open a file and display it
#include <stdio.h>
#include <stdlib.h> // for exit()

int main(void)
{
    int ch;
    FILE * fp;
    char fname[50]; // to hold the file name

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r"); // open file for reading
    if (fp == NULL) // attempt failed 
    {
        printf("Failed to open file. Bye\n");
    }
    // getc(fp) gets a character from the open file
    while ((ch = getc(fp) != EOF))
        putchar(ch);
    fclose(fp);
    
    return 0;
}