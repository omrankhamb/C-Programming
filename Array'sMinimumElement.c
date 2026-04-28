#include<stdio.h>
#include<limits.h>
int main()
{
int arr[7]={2,4,8,12,34,23,32};
int max=INT_MAX;
for(int i=0 ;i<=6;i++){
if(max>arr[i]){
max=arr[i];
}
}
printf("%d",max);
    return 0;
}