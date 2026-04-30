#include<stdio.h>

int main()
{
    int arr[]= {3,4,5,6,1,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n ; i++) {
        printf("%d ",arr[i]);
    }

    for(int i=1 ; i<n-1 ; i++) {
        int temp=arr[0];
        int idx=-1;
        for(int j=0; j<n-1-i ; j++) {
            if(arr[j+1]<arr[j]) {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0; i<n ; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}