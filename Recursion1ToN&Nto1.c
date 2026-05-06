#include<stdio.h>
void decreasing(int x,int n){
      if(x<n) return;
      printf("%d \n",x);
      decreasing((x-1),n);
      return;
}
void increasing(int x,int n){
if(x>n) return;
printf("%d\n",x);
     increasing(x+1,n);
     return ;
}
int main()
{
int x;
printf("enter number n");
scanf("%d",&x);
decreasing(x,1);
increasing(1,x);


    printf("Hello world!");
    return 0;
}