#include<stdio.h>

int main()
{
int n,m;
printf("enter number n:");
scanf("%d",&n);
printf("\n");
printf("enter number m:");
scanf("%d",&m);
int a[n];
int b[m];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<m;i++){
scanf("%d",&b[i]);
}
printf("\n");
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
for(int i=0;i<m;i++){
printf("%d ",b[i]);
}
printf("\n");
int c[n+m];
    for(int j=0 ; j<n ; j++){
    c[j]=a[j];
    }
        for(int j=0 ; j<m ; j++){
    c[n+j]=b[j];
    }

for(int i=0;i<n+m;i++){
printf("%d ",c[i]);
}



    printf("Hello world!");
    return 0;
}