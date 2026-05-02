#include<stdio.h>

int main()
{
int a[]={2,3,4,1,6,5,7};
int n=sizeof(a)/sizeof(a[0]);
int min=0;
for(int i=0 ; i<n; i++){
min=i;
    for(int j=0 ; j<n ; j++){
    if(a[j]>a[min]){
    min=j;
    }
    int temp=a[min];
    a[min]=a[i];
    a[i]=temp;
    }
}
for(int i=0 ; i<n ; i++){
printf("%d ",a[i]);
}
    printf("Hello world!");
    return 0;
}