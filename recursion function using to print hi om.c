#include<stdio.h>
void greeting(int x){
     for(int i=1 ;i<=x ;i++){
       printf("hi om \n");}
   
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