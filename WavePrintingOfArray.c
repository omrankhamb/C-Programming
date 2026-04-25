#include<stdio.h>

int main()
{
    int n,m;
    printf("enter number of rows :");
    scanf("%d",&n);
    printf("enter number of column :");
    scanf("%d",&m);
    int a[n][m];
    printf("enter element of arrays :");
    for(int i=0 ; i<n ; i++) {
        for(int j=0; j<m ; j++) {
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0 ; i<n ; i++) {
        for(int j=0; j<m ; j++) {
            if(i==1){
            printf("%d ",a[n-j-1][i]);
            }
            else
            printf("%d ",a[j][i]);
            
        }

    }

    printf("Hello world!");
    return 0;
}