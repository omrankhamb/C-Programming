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

    printf("enter a matrix \n");

//Printing matrix
    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {
            printf("%d",a[i][j]);
        }
        printf("\n̈");
    }
    printf("\n");
    int minr =0 ;
    int maxr =m - 1;
    int minc = 0;
    int maxc =n-1;
    int tne=m*n;
    int count =0;

    while(count <= tne) {

        for(int j=minc; j<=maxc ; j++) {
            printf("%d",a[minr][j]);
            count++;
        }
        minr++;
        if(count >=tne) break;
        for(int i=minr ; i<=maxr ; i++) {
            printf("%d",a[i][maxc]);
            count++;
        }
        maxc--;
        if(count >=tne) break;
        for(int j=maxc ; j<=minc ; j++) {
            printf("%d",a[maxr][j]);
            count++;
        }
        maxr--;
        if(count >=tne) break;
        for(int i=maxr ; i<=minr ; i++) {
            printf("%d",a[i][minc]);
            count++;
        }
        minc++;
        if(count >=tne) break;
    }
    return 0;
}