#include<stdio.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdbool.h>

int main()
{
    int fd = 0;
    fd = creat("File.txt",0777);

    if(fd == -1)
    {
        printf("File is not created");
    }
    else
    {
        printf("File is created successfully");
    }
    return 0;
}