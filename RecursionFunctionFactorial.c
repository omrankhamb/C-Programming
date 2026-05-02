// recursion  sum
#include<stdio.h>
int call(int x,int y){
if(y==0 || x==1) return 1;
int recn=call(x,y-1)+call(x,y-2);
return recn;

}
int main()
{
int n;
    printf("enter number n");
    scanf("%d",&n);
  int j=call(1,n);
  printf("%d",j);
    return 0;
}