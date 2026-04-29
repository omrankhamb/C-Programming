//finding gcd
#include<stdio.h>


int main()
{
int n,m,j=0;
printf("enter n=");
scanf("%d",&n);
printf("enter m=");
scanf("%d",&m);
    for(int i=1 ; i<=n && i<=m ; i++ ){
        if(n%i==0 && m%i==0){
        j=i;
        }
        
    }
    printf("gcd =%d\n",j);
    printf("lcm=%d",(n*m)/j);
    return 0;
}