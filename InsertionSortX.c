#include<stdio.h>

int main()
{
int arr[]={2,3,1,4,5,6};
int n =sizeof(arr)/sizeof(arr[0]);

for(int i=0 ; i<n ;i++){
    printf("%d ",arr[i]);
}

for(int i=0 ; i<n-1 ; i++){
    for(int j=0 ; j<n-1 ; j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}

printf("\n");
for(int i=0 ; i<n ;i++){
    printf("%d ",arr[i]);
}
    printf("Hello world!");
    return 0;
}