#include<stdio.h>

int main()
{
    int m;
    printf("enter number of rows matrix 1 ;");
    scanf("%d",&m);
    int n;
    printf("enter number of column matrix 1 ;");
    scanf("%d",&n);
    printf("enter a  matrix m×n");
    int a[m][n];

    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0 ; i<m ; i++) {
        if(i%2==0){
            for(int j=0 ; j<n ; j++) {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        else {
            for(int j=n-1 ; j>=0 ; j--) {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}