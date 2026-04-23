#include<stdio.h>
int fibonaci(int x){
if(x==0)  return 1;
if(x==1 || x==2 ) return 1;
int recn;
 recn=fibonaci(x-1)+fibonaci(x-2);
 return recn ;
}
int main()
{
int n;
printf("enternumber n: ");
scanf("%d",&n);
fibonaci (n);
printf("\n%d",fibonaci(n));
    return 0;
}