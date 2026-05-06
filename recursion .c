#include<stdio.h>
void greeting(int x){
     if(x==0) return;//  base theroem
       printf("hi om \n");//Actualcode
       greeting(x-1);
       return;
   
}
int main()
{
int n;
printf("enter number n");
scanf("%d",&n);
greeting(n);
    printf("Hello world!");
    return 0;
}