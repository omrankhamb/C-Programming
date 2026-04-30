//reversing array
#include<stdio.h>

int main()
{
int n;
printf("enter number n");
scanf("%d",&n);
int a[n];
printf("enter array elemts max %d",n-1);
//Printing array
for(int i=0 ; i<n; i++){
    scanf("%d",&a[i]);
}
// Printing reverse array
for(int j=0 ; j<((n-1)/2) ; j++){
int temp;
temp=a[j];
a[j]=a[n-1-j];
a[n-1-j]=temp;
}
for(int j=0 ; j<n ; j++){
    printf("   %d",a[j]);
}
    printf("Hello world!");
    return 0;
}