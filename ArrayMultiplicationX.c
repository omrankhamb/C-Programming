#include<stdio.h>

int main()
{

int arr[4]={1,2,3,4};
int multiply ;
multiply=1;
for(int i=0 ; i<=3 ; i++){
    multiply=multiply*arr[i];
}
  printf("%d",multiply);
  return 0; 
}