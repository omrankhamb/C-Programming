#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
int rightways=0,downways=0;
if(cr==er || cc==ec) return 1;
if(cr==er)
rightways +=maze(cr,cc+1,er,ec);
if(cc==ec)
downways +=maze(cr+1,cc,er,ec);
if(cr<er || cc<ec){
downways +=maze(cr+1,cc,er,ec);
rightways +=maze(cr,cc+1,er,ec);
}
int totalways =rightways +downways;
return totalways ;
}
int main()
{
int n,m;
printf("enter number of rows of maze :");
scanf("%d",&n);
printf("enter number of columns of maze :");
scanf("%d",&m);
    printf("%d",maze(1,1,n,m));
    return 0;
}