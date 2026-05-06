#include<stdio.h>
int binary(int x){
   int bi;
   bi=x%2;
   printf("%d",bi);
   int tri=x/2;
   if(x/2==1)
   printf("1");
   else
   binary(tri);
}
int main()
{
int n;
printf("enter a number n");
scanf("%d",&n);
binary(n);
    return 0;
}