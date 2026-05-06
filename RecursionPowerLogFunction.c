#include<stdio.h>
int power(int a, int b) {
    if(b==1) return a;
    int x=power(a,b/2);  
    if(b%2==0) return x*x;
    else return x*x*a;
}
int main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    printf("power of a to b is %d ",power(a,b));
    return 0;
}