#include<stdio.h>

int main()
{
int i;
op:

printf("true");
printf("enter i");
scanf("%d",&i);
if(i==3){
goto op;
}
else goto op;
    printf("Hello world!");
    return 0;
}