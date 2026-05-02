#include<stdio.h>
int fact(int n){
if(n==0 || n==1 ) return 1;
int recn=1;
recn=n*fact(n-1);
return recn;
}
int comb(int i,int j){

int recn ;
recn=i/j;
return recn;
}
int main()
{
int n,r;
printf("enter n:\n");
    printf("enter r ;");
    scanf("%d %d",&n,&r); 
  printf("combination is %d",comb(fact(n),fact(n-r)));
    return 0;
}