#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char file[] = "grades.txt";
    int file_descriptor;

    file_descriptor = open(file, O_RDONLY);

    if (file_descriptor < 0)
    {
        fprintf(stderr, "Could not open%s", file);
        exit(1);
    }
  // close(file_descriptor);
    return 0;
}