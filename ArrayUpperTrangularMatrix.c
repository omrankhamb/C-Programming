#include<stdio.h>

int main()
{
    int n,m;
    printf("enter number of rows :");
    scanf("%d",&n);
    printf("enter number of column :");
    scanf("%d",&m);

    int a[n][m];
    printf("entere elements of array :");
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    int sum=0 ;
       for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m-1 ; j++) {
        if(i>j){
        a[i][j]=0;
        }
        }
        
    }
    printf("\n");
     for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}