#include<stdio.h>

int main()
{
    int  iNo = 10;
    int  iNo2 = 20;

    int * const ptr = &iNo;
    ptr = &iNo2;        // Address of pointer remain constant
    printf("%d",*ptr);

    return 0;
}