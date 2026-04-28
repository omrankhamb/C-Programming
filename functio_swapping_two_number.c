#include<stdio.h>
void swap(int* x, int* y){
int temp;
temp=*x;
*x=*y;
*y=temp;
return;
}
int main()
{
   int a;
   int b;
   printf(" enter a");
   scanf("%d",&a);
     printf(" enter b");
   scanf("%d",&b);
   swap(&a,&b);
   printf("%d\n",a);
   printf("%d\n",b);
    return 0;
}