#include<stdio.h>

int main()
{
    int n,a=0,b=1,sum=0;
    printf("enter number n:");
    scanf("%d",&n);
    for(int i=0 ; i<=n ; i++) {
        if(n==0) {
            a=0;
            printf("%d ",a);
        }
        else if(n==1) {
            b=1;
            printf("%d ",b);
        }
        else
            sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
}