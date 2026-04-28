#include<stdio.h>

int main()
{
int arr[7]={1,2,3,4,4,5,6};

for(int i=0 ; i<=6 ; i++){
    for(int j=i+1 ; j<=6 ; j++){
        if(arr[i]==arr[j]){
         printf("%d\n duplication of ele,ent is present",arr[i]);
         break; // if two duplicate element are present then we have used to break conditin
        }
    
    }
}
    printf("Hello world!");
    return 0;
}