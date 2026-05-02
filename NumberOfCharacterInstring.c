#include<stdio.h>

int main()
{
char a[40];
int count=0;
printf("enter a string");
scanf("%[^\n]s\n",a);
    printf("the size is");
    int i=0;
    while(a[i]!='\0'){
    count++;
    i++;
    }
    printf("%d\ ",count);
    return 0;
}