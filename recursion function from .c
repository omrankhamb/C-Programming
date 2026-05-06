#include<stdio.h>
void increasing(int x,int n){
      if(x<n) return;
      printf("%d \n",x);
      increasing((x-1),n);
      return;
}
void decreasing(int x,int n){
if(x>n) return;
printf("%d\n",x);
     decreasing(x+1,n);
     return ;
}
int main()
{
int x;
printf("enter number n");
scanf("%d",&x);
decreasing(1,x);
increasing(x,1);

    printf("Hello world!");
    return 0;
}