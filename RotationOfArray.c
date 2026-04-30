#include<stdio.h>

int main()
{
    int arr[]= {1,2,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int temp ;
    for(int k=0 ; k<6 ; k++) {
        temp=arr[0];
        for(int i=0 ; i<n ; i++) {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }

    for(int i=0 ; i<n ; i++) {
        printf("%d ",arr[i]);

    }
    printf("Hello world!");
    return 0;
}