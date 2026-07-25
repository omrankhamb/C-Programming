#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<stdbool.h>

int main()
{
    int fd = 0;
    fd = open("File.txt",O_RDWR | O_APPEND);
    char data[100] = "Omprasad";

    if(fd == -1)
    {
        printf("File is not Opened");
    }
    else
    {
        printf("File is Opened successfully");
        write(fd,data,8);
        // File descriptor data pointer and no of bytes to get entered
        close(fd);
    }
    return 0;
}