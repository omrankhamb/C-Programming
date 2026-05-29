#include<stdio.h>

int main()
{
    char ch = 'a';
    void *ptr = NULL;

    ptr = &ch;
    
    printf("%d\n",&ch);
    printf("%d\n",&(*ptr));
    printf("%c\n",*(char*)ptr);
    return 0;
}