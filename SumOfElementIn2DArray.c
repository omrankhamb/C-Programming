#include<stdio.h>

int main()
{
int m[3][3]={{1,2,3,},{1,2,3},{1,2,3}};
int sum;
sum=0;
for(int i=0 ; i<3 ; i++){
    for(int j=0 ; j<3 ; j++){
    sum=sum+m[i][j];
    }
  
}  printf("%d",sum);
    return 0;
}