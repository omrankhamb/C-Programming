#include<stdio.h>

int main()
{
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    int m;
    printf("enter number of column:");
    scanf("%d",&m);

    int a[n][m];
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            if(i>=j) 
                a[i][j]=a[i][j];
                else
                    a[i][j]=0;
               
            
        }
    }


    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}