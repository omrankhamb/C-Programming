#include<stdio.h>
int pow(int n,int m){
if(m==0) return 1;
int recn=1;
recn=n*pow(n,m-1);
return recn;

}
int main()
{
int n,m;
printf("enter number n and m: ");
scanf("%d %d",&n,&m);

    printf("%d",pow(n,m));
    return 0;
}