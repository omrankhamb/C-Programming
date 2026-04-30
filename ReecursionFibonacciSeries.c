#include<stdio.h>
int fibo(int n){
if(n==0) return 0;
if(n==1) return 1; 
int recn ;
recn = fibo(n-1)+ fibo(n-2);
return recn;

}
int main()
{
int n;
    printf("enter number n ;");
    scanf("%d",&n);
   printf("%d",fibo(n));
    return 0;
}