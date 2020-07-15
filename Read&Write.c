#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
    int file_descriptor;
    char * newFilePath = "newFile.txt";
    char * giveEm = "THE BUSINESS\n";
    ssize_t nread, nwritten;
    char readBuffer[32];

    file_descriptor = open(newFilePath, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR, S_IWUSR);

    if (file_descriptor == -1)
    {
        printf("Hull breach - open() failed on\"%s\"\n", newFilePath);
        perror("In main()");
        exit(1);
    }

    nwritten = write(file_descriptor, giveEm, strlen(giveEm) * sizeof(char));
    memset(readBuffer,'\0', sizeof(readBuffer)); // Clear out the array before using it
    lseek(file_descriptor, 0, SEEK_SET); // reset the file pointer to the beggining of the set
    nread = read(file_descriptor, readBuffer, sizeof(readBuffer));

    printf("File contents\n%s", readBuffer);
    return 0;
}