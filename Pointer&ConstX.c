#include<stdio.h>

int main()
{
    int  iNo = 10;
    int  iNo2 = 20;

    int const *ptr  = &iNo;
    // const int *ptr  = &iNo;

    iNo = 30;

    printf("%d",*ptr);
    return 0;
}
