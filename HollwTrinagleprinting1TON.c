#include<stdio.h>

int main()
{
int n;
printf("enter number n");
scanf("%d",&n);
  
  for(int i=1 ;i<=n;i++){
  for(int k=1 ; k<=n-i ;k++){
  printf(" ");
  }
      for(int j=1 ;j<=i ; j++){
      if(i==n || j==1 || j==i)
      printf("*");
      else
      printf(" ");
      }
  printf("\n");
  }
    return 0;

}
