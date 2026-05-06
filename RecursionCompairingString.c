#include<stdio.h>
int copyright(a[],b[],int n){
if(n==0)  return 0;

b[n-1]=a[n-1];
copyright(a,b,n-1);
return 0 ;
}
int main()
{
int a[]={1,2,3,4,5,6};
int n;
n=sizeof(a)/sizeof(a[0]);
int b[n];

copyright(a,b,n);
for(int i=0 ; i<n ; i++){
printf("%d\n",b[i]);

}
    printf("Hello world!");
    return 0;
}