#include<stdio.h>

int main()
{
int n,m;
printf("enter number of rows :");
scanf("%d",&n);
printf("enter number of column :");
scanf("%d",&m);
int a[n][m],c[m][n];
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++){
        scanf("%d",&a[i][j]);
    }
}
int k=m<n?n:m;
for(int i=0 ; i<k; i++){
    for(int j=0 ; j<k; j++){
        c[i][j]=a[j][i];
        }
}

for(int i=0 ; i<m ; i++){
printf("| ");
    for(int j=0 ; j<n ; j++){
    printf("%d ",c[i][j]);
        }
        printf("|\n");
}
    return 0;
}