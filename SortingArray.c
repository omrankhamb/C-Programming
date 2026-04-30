#include<stdio.h>
int insertionsort(int arr[],int N) {
//starting from the second element
    for(int i=1 ; i<N ; i++) {
        int key = arr[i];
        int j=i-1;
//move elemtes of arr[0.....i..1],that are
//greater than key one position to
//the right of their current position
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;


    }
}

int main()
{
    int arr[]= {12,11,13,5,6};
    int N= sizeof(arr)/sizeof(arr[0]);

           printf("unsorted array");
    for(int i=0 ; i<N ; i++) {
        printf("  %d",arr[i]);
    }
    insertionsort(arr,N);
 for(int i=0 ; i<N ; i++) {
        printf("\n  %d",arr[i]);
    }
   
    return 0;
}