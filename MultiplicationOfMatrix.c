#include<stdio.h>

int main()
{
    int m;
    printf("enter no of rows of 1st row of matrix 1:");
    scanf("%d",&m);

    int n;
    printf("enter number of column of matrix 1 :");
    scanf("%d",&n);


    int p;
    printf("enter no of rows of 1st row of matrix 1:");
    scanf("%d",&p);

    int q;
    printf("enter number of column of matrices 1 :");
    scanf("%d",&q);
    int a[n][m];
    int b[p][q];

    printf("enter 1 st matrix");
    for(int i=0; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter 2nd matrix");
    for(int i=0; i<p ; i++) {
        for(int j=0 ; j<q ; j++) {
            scanf("%d",&b[i][j]);
        }

    }
    int res[n][q];
    //multiplication  of matrix
    for(int i=0; i<n; i++) {
        for(int j=0; j<m ; j++) {
        res[i][j] =0;
                    for(int k=0 ; k<p ; k++) {
                res[i][j] += a[i][k]*b[k][j];
            }
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}