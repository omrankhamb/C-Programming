#include<stdio.h>

int main()
{
int a[20],n;
    printf("enter number of element :");
    scanf("%d",&n);
    printf("enter string");
    for(int i=0 ; i<n ; i++){
    scanf("%d",&a[i]);
    }
    int max=0,min=0;
        for(int i=0 ; i<n ; i++){
    if(a[max]<a[i])
    a[max]=a[i];
    }
    printf("%d\n",a[max]);
    
         for(int i=0 ; i<n ; i++){
    if(a[min]>a[i])
    a[min]=a[i];
    }
    printf("%d",a[min]);
    return 0;
}