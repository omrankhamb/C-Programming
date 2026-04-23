#include<stdio.h>

int main()
{    int n; 
    printf("enter number :");
    scanf("%d", &n);
    int sum=1;
    int i=1;
    while(i<=n){
   sum=sum*i;
    i++;
    }
    printf("%d ",sum);
    return 0;
}