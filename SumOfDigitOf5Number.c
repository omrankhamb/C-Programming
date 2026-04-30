#include<stdio.h>

int main()
{
int n;
printf("enter number n");
scanf("%d",&n);
    int x;
    int sum=0;
    
    x=n%10;
    sum=sum+x;
    n/=10;
    
       x=n%10;
    sum=sum+x;
    n/=10;
    
       x=n%10;
    sum=sum+x;
    n/=10;
    
      x=n%10;
    sum=sum+x;
    n/=10;
    
       x=n%10;
    sum=sum+x;
    n/=10;
    
    printf("sum of 5 number is %d",sum);
    
    
    
    
    
    
    return 0;
}