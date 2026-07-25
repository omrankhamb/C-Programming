#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<stdbool.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    fd = open("File.txt",O_RDWR | O_APPEND);
    char data[100] = "Omprasad";

    if(fd == -1)
    {
        printf("File is not Opened");
    }
    else
    {
        printf("File is Opened successfully\n");
        write(fd,data,8);
        // File descriptor data pointer and no of bytes to get entered

        memset(data,'\0',sizeof(data));
        iRet = read(fd,data,8);
        // file descriptor and data and number of bytes to fetch
        // Data unable to ftech because of the pointer moves to end
        // So we have to reset the pinter to initial position
        
        printf("Byte Get suucessfully read : %d\n",iRet);
        printf("Data fetched from the string is : %s",data);
        
        close(fd);
    }
    return 0;
}