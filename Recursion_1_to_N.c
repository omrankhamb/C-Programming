#include<stdio.h>
void increasing(int x ,int n){
  if(x>n)return;
  printf("%d\n",x);
  increasing(x+1,n);
  return;
  }

int main()
{
int n ;
printf("enter number n");
scanf("%d",&n);
increasing(1,n);
    printf("Hello world!");
    return 0;
}