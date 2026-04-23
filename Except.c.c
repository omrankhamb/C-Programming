#include<stdio.h>

int main()
{
    for(int i=1;i<11;i++){
    if(i==6){
    continue;
    }
    printf("%d\n",i);
    }
    return 0;
}