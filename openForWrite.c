#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char file[] = "grade.txt";
    int file_descriptor;
    file_descriptor = open(file, O_WRONLY );

    if (file_descriptor < 0)
    {
        fprintf(stderr, "Could not open %s", file);
        perror("Error in main()");
        exit(1);
    }
    
   // close(file_descriptor);
    return 0;
}