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

for(int i=0 ;i<n ; i++){
    for(int j=0 ; j<m ; j++){
    scanf("%d",&a[i][j]);
    }
}

//normal. printing 
int sum=0;
for(int i=0 ;i<n ; i++){
    for(int j=0 ; j<m ; j++){
     sum=sum+(a[i][j]*a[i][j]);
    }
}
int add=0;
for(int i=0 ;i<n ; i++){
    for(int j=0 ; j<m ; j++){
     if (i==j){
     add=add+a[i][j];
     }
    }
}
int c=sqrt(sum);
printf("sum is  %d",c);
printf("\n");
printf("trace is :%d",add);

    return 0;
}