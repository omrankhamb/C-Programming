#include<stdio.h>

int main()
{
int n;
    printf("enter number n.");
    scanf("%d",&n);
    int sum=1;
    for(int i=1;i<=n;i++){
    sum=sum*i;
    }
    printf("sum is %d \n",sum );
    return 0;
}