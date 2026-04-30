#include<stdio.h>
#include<limits.h>
int main()
{
    int a[]= {1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);

//Printing
    for(int i=0; i<n ; i++) {
        printf("%d ",a[i]);
    }

//sort
    for(int i=0 ; i<n-1 ; i++) {
        int min=INT_MAX;
        int index=-1;
        for(int j=i+1 ; j<n ; j++) {
            if( min>a[j]) {
                min=a[j];
                index=j;
            }
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }

    }
    printf("\n");
    for(int i=0 ; i<n ; i++) {
        printf("%d ",a[i]);

    }
    return 0;
}