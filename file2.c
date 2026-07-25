#include<stdio.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdbool.h>

int main()
{
    int fd = 0;
    fd = open("File.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("File is not Opened");
    }
    else
    {
        printf("File is Opened successfully");
        
    }
    return 0;
}