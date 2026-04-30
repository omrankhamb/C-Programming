#include<stdio.h>

int main()
{
float sum=0;
int fact=1,n;
    printf("enter number n :");
    scanf("%d",&n);
    for(int i=1 ; i<=n ;i++ ){
    fact=fact*i;
    printf("%d\n ",fact);
    sum = sum +(1/(float)fact);
    printf("%f \n",sum);
    }
    printf(" %f",sum);
    return 0;
}