#include<stdio.h>

int main()
{
int a[5][5];
for(int i=0 ; i<5 ; i++){
    for(int j=0 ; j<5 ; j++){
        scanf("%d",&a[i][j]);
    }
}
for(int r=0 ; r<5 ; r++){
    for (int b=0 ; b<5 ; b++ )
    printf("%d ",a[r][b]);
    printf("\n");
}
    printf("Hello world!");
    return 0;
}