#include<stdio.h>

int main()
{
 int arr[]= {1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d ;
    printf("to rotate array");
    scanf("%d",&d);

for(int i=0 ; i<d ; i++){
       int temp=arr[0];
       for(int j=0 ; j<n-1 ; j++){
       arr[j]=arr[j+1];
       }
       arr[n-1]=temp;
}
  for(int i=0 ; i<n ; i++) {
        printf("%d ",arr[i]);
    }
    printf("Hello world!");
    return 0;
}