#include<stdio.h>
int power(int a,int b){
int x=1;
for(int i=1 ; i<=b ; i++)
x=x*i;
return x;
}
int main()
{
int a,b;
printf("enter number a,b");
scanf("%d%d",&a,&b);
int z=pow(a,b);
printf("power of %d raised to %d is %d",a,b,z);
    return 0;
}