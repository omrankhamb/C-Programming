#include<stdio.h>

int main()
{
    int a,m;
    printf("enter number n:");
    scanf("%d",&a);
    m=a;
    int b,n;
    printf("enter number m:");
    scanf("%d",&b);
    n=b;

label:

    if(a!=b) {
        if(a>b) {
            a=a-b;
            goto label;
        }
        else {
            b=b-a;
            goto label;
        }
    }
    printf("gcd of %d and %d is :%d ",m,n,a);

    return 0;
}