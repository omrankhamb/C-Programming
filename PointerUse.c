//to return more than one value pointer is used
#include<stdio.h>
int ret(int a,int b,int *sum,int *diff){
*sum=a+b;
*diff=a * b;
}
int main()
{
int a=10;
int b=6;
int sum,diff;
ret(a,b,&sum,&diff);
printf("%d,",sum);
printf("%d ",diff);
   
    return 0;
}