#include<stdio.h>
int swap(int *x,int *y){
*x=*x + *y;
*y=*x - *y;
*x=*x - *y;
printf("%d %d \n",*x,*y);
}
int main()
{
int a,b;
printf("enter a : ");
scanf("%d",&a);
printf("enter b :");
scanf("%d",&b);
swap(&a,&b);
printf("%d %d",a,b);
    return 0;
}