#include<stdio.h>

int main()
{
    int n;
    printf("enter number of elemnets n :");
    scanf("%d",&n);
    int a[n];
    for(int i=0 ; i<n ; i++) {
        scanf("%d",&a[n]);
    }
    int m;
    printf("enter a number to find key");
    scanf("%d",&m);

    for(int i=0;i<n;i++) {
        if(a[i]==m) {
            printf("key is present at %d",i);
        }

    }
    return 0;
}