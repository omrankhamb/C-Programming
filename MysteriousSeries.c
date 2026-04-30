#include<stdio.h>
int power(int a,int b) {
    if(b==1) return 1;
    int recn;
    recn= a*power(a,b-1);
    return recn;
}
int factorial(int c) {
    if(c==0 || c==1) return 1;

    return c*factorial(c-1);
}

int main()
{
    int x,n;
    float sum=0;
    printf("enter the value of x :");
    scanf("%d",&n);
    printf("enter number to find nth term :");
    scanf("%d",&n);
    for(int i=1,j=1 ; i<=n ; i++,j+=2) {
        if(i%2==0) {
            sum -= power(n,j)/factorial(j);
        }
        else {
            sum += power(n,j)/factorial(j);
        }

    }
    printf("%f",sum);
    return 0;
}