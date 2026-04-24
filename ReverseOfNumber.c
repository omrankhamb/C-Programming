#include<stdio.h>

int main()
{
int n;
printf("enter number n :");
scanf("%d",&n);
int m=n;
int rev=0;
int digit; 
label:
if(n%10!=0){
digit=n%10;
rev = rev * 10 +digit;
n=n/10;
goto label;
}
printf("number reverse of %d is %d",m,rev);
 return 0;
}