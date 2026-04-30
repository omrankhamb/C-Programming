#include<stdio.h>

int main()
{int n;
printf("enter number n");// 
scanf("%d",&n);
printf("Enter all elements ;");

// input of matix
int arr[n][n];
  for(int i=0; i<n ; i++){
      for(int j=0 ; j<n ; j++){
      scanf("%d",&arr[i][j]);
      }
  }
  //transpose
  for(int i=0 ; i<n ; i++){
  for(int j=0 ; j<n ; j++){
      int temp;
      temp=arr[i][j];
      arr[i][j]=arr[j][i];
      arr[j][i]=temp;
  }
  }
  //output
  for(int i=0 ; i<n ; i++){
      for(int j=0 ; j<n ; j++){
      printf("%d ",arr[i][j]);
  }
  printf("\n");
  }
    return 0;
}