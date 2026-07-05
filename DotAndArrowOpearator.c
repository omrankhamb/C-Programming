#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int Additoin()
{
    return 10 + 12;
}
typedef struct demo
{
    int (*ptr)();
    char arr[30];
    int RollNO;
    
    
}demo;


int main()
{
    // int iSize = 0;
    // printf("Enter Size Of Array : ");

    // scanf("%d",&iSize);

    demo dobj= {Additoin};
    printf("%d",dobj.ptr());

    return 0;
}