#include<stdio.h>

int main()
{
int n;
printf("enter number of rows n");
scanf("%d",&n);
int m;
printf("enter number of columns m");
scanf("%d",&m);
int a[n][m];


for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++){
    scanf("%d",&a[i][j]);
    }

}

for(int i=0 ; i<3 ;i++){
    for(int j=0; j<3 ; j++){
    if(i==0){
    int temp;
    temp=a[i][j];
      a[i][j]=a[i+2][j];
      a[i+2][j]=temp;
    }
  
    else
    a[i][j]=a[i][j];
    }
}

for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++){
    printf("%d ",a[i][j]);
    }
printf("\n");
}

    printf("Hello world!");
    return 0;
}