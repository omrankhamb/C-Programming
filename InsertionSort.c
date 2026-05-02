#include<stdio.h>
#include<limits.h>

int main()
{
int arr[]={2,3,5,7,1,4,6};
int n=sizeof(arr)/sizeof(arr[0]);

for(int i=0 ; i<n-1 ; i++){
int min=INT_MAX;
int idx=-1;
    for(int j=i ; j<n; j++){
        if(min>arr[j]){
        min=arr[j];
        idx=j;
        }
    
    }int temp=arr[idx];
    arr[idx]=arr[i];
    arr[i]=temp;
}
 for(int i=0 ; i<n ; i++){printf("%d ",arr[i]);}
    printf("Hello world!");
    return 0;
}