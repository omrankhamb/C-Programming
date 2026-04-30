#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter number of rows n:");
    scanf("%d",&n);

    int m;
    printf("enter number of column :");
    scanf("%d",&m);

    int a[n][m];
printf("enter matrix");
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("for row transformation enter 1: ");
    int l;
    scanf("%d",&l);
if(l==1){
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
        if(j==0){
            int temp=a[i][j];
            a[i][j]=a[i][j+2];
            a[i][j+2]=temp;
            }
        }
    }

}    
    else{
     for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
        if(i==0){
            int temp=a[i][j];
            a[i][j]=a[i+2][j];
            a[i+2][j]=temp;
            }
        }
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