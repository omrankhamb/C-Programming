#include<stdio.h>
int fibo(int n){
     if(n==1 || n==2)return 1;
     int ans1=fibo(n-1);
     int ans2=fibo(n-2);
     int ans =ans1 + ans2;
return ans;
}

int main()
{
int n;
printf("enter number n");
scanf("%d",&n);
printf("fibonacci of %d is %d",n,fibo(n));
    
    return 0;
}