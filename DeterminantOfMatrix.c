#include<stdio.h>

int main()
{int n;
printf("enter number of rows n :");
scanf("%d",&n);
int m;
printf("enter number of rows m :");
scanf("%d",&m);

int matrix[n][m];
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++){
    scanf("%d",&matrix[i][j]);
    }
}

int det;

det=matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2]) - 
matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[2][0]*matrix[1][2]) +
matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[2][0]*matrix[1][1]);
    printf("%d",det);
    return 0;
}