#include<stdio.h>

int main()
{
    int a[]= {2,3,5,7,1,4,6};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0 ; i<n-1 ; i++) {
        for(int j=0 ; j<n-1 ; j++) {
            if(a[j+1]<a[j]) {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }

        }

    }

    for(int i=0 ; i<n ; i++) {
        printf("%d ",a[i]);
    }
    printf("Hello world!");
    return 0;
}